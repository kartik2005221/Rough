import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QWidget, QPushButton
from PyQt5.QtWebEngineWidgets import QWebEngineView
from PyQt5.QtCore import QUrl

class SimpleBrowser(QMainWindow):
    def __init__(self):
        super(SimpleBrowser, self).__init__()

        # Set the title and size of the window
        self.setWindowTitle("Online C Compiler by AiR")
        self.setGeometry(100, 100, 800, 600)

        # Create a central widget
        self.central_widget = QWidget()
        self.setCentralWidget(self.central_widget)

        # Create a layout
        layout = QVBoxLayout()
        self.central_widget.setLayout(layout)

        # Create a QWebEngineView widget
        self.browser = QWebEngineView()
        self.browser.setUrl(QUrl("https://www.programiz.com/c-programming/online-compiler/"))
        layout.addWidget(self.browser)

        # Optional: Add a button to refresh the page
        self.refresh_button = QPushButton("Refresh")
        self.refresh_button.clicked.connect(self.browser.reload)
        layout.addWidget(self.refresh_button)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    browser = SimpleBrowser()
    browser.show()
    sys.exit(app.exec_())
