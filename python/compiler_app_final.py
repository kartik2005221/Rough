# passed
import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QWidget, QPushButton, QTabWidget, QHBoxLayout
from PyQt5.QtWidgets import *
from PyQt5.QtWebEngineWidgets import QWebEngineView
from PyQt5.QtCore import QUrl
from PyQt5.QtCore import *
from PyQt5.QtGui import *

class BrowserTab(QWebEngineView):
    def __init__(self, url, parent=None):
        super().__init__(parent)
        self.load(QUrl(url))
        # Block external navigation
        self.urlChanged.connect(self.check_navigation)

    def check_navigation(self, url):
        allowed_urls = [
            "https://www.programiz.com/python-programming/online-compiler/",
            "https://codepen.io/pen",
            "https://www.programiz.com/java-programming/online-compiler/",
            "https://www.programiz.com/c-programming/online-compiler/" 
        ]
        # Redirect to correct tab URL if navigation is not allowed
        if url.toString() not in allowed_urls:
            self.blockSignals(True)
            self.setUrl(QUrl(self.history().currentItem().url()))  # Reload last valid URL
            self.blockSignals(False)

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Online C Compiler with Tabs")
        self.setGeometry(300,100,1200,800)
        self.setWindowIcon(QIcon('air.ico'))

        # Create main layout
        self.main_widget = QWidget()
        self.setCentralWidget(self.main_widget)
        layout = QVBoxLayout()

        # Add refresh button
        refresh_button = QPushButton("Refresh")
        refresh_button.clicked.connect(self.refresh_page)
        layout.addWidget(refresh_button)

        # Create tabs for different compilers/tools
        self.tabs = QTabWidget()
        self.python_tab = BrowserTab("https://www.programiz.com/python-programming/online-compiler/")
        self.c_tab = BrowserTab("https://www.programiz.com/c-programming/online-compiler/") 
        self.html_tab = BrowserTab("https://codepen.io/pen")
        self.java_tab = BrowserTab("https://www.programiz.com/java-programming/online-compiler/")

        # Add tabs
        self.tabs.addTab(self.python_tab, "Python")
        self.tabs.addTab(self.c_tab, "C Language")
        self.tabs.addTab(self.html_tab, "HTML")
        self.tabs.addTab(self.java_tab, "Java")

        layout.addWidget(self.tabs)
        self.main_widget.setLayout(layout)

    def refresh_page(self):
        # Refresh the current tab
        current_tab = self.tabs.currentWidget()
        current_tab.reload()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())
