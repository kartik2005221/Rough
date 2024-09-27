# failed
import sys
from PyQt5.QtCore import QUrl, QObject
from PyQt5.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QWidget, QPushButton, QTabWidget
from PyQt5.QtWebEngineWidgets import QWebEngineView, QWebEngineProfile, QWebEngineUrlRequestInterceptor


class AdBlocker(QWebEngineUrlRequestInterceptor):
    def __init__(self, parent=None):
        super().__init__(parent)
        # List of common ad domains or URL patterns
        self.blocked_urls = [
            "doubleclick.net",
            "googlesyndication.com",
            "googleadservices.com",
            "adservice.google.com",
            "ads.pubmatic.com",
            "adform.net",
            "taboola.com",
            "outbrain.com",
            "zedo.com",
            "ads.yahoo.com",
            # Add more ad-related domains here...
        ]

    def interceptRequest(self, info):
        url = info.requestUrl().toString()
        for blocked_url in self.blocked_urls:
            if blocked_url in url:
                # If the URL matches an ad domain, block it
                print(f"Blocked ad: {url}")
                info.block(True)
                break


class BrowserTab(QWebEngineView):
    def __init__(self, url, parent=None):
        super().__init__(parent)
        self.load(QUrl(url))


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Browser with Ad Blocking")

        # Create the main layout
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
        self.c_tab = BrowserTab("your_c_language_url")  # Replace with your C language URL
        self.html_tab = BrowserTab("https://codepen.io/pen")
        self.java_tab = BrowserTab("https://www.programiz.com/java-programming/online-compiler/")
        self.color_picker_tab = BrowserTab("https://colorpicker.me/")

        # Add tabs
        self.tabs.addTab(self.python_tab, "Python")
        self.tabs.addTab(self.c_tab, "C Language")
        self.tabs.addTab(self.html_tab, "HTML (CodePen)")
        self.tabs.addTab(self.java_tab, "Java")
        self.tabs.addTab(self.color_picker_tab, "Color Picker")

        layout.addWidget(self.tabs)
        self.main_widget.setLayout(layout)

    def refresh_page(self):
        # Refresh the current tab
        current_tab = self.tabs.currentWidget()
        current_tab.reload()


if __name__ == "__main__":
    app = QApplication(sys.argv)

    # Set up ad blocker
    ad_blocker = AdBlocker()
    profile = QWebEngineProfile.defaultProfile()
    profile.setRequestInterceptor(ad_blocker)

    # Create main window
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())
