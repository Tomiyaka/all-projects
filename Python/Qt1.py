
from PyQt5.QtWidgets import *
import sys

class megop(QMainWindow):
    def __init__(self):
        super(megop,self).__init__()
        
        self.setWindowTitle("Гречка хай")
        self.setGeometry(300,250,1000,500)

        self.newt=QLabel(self)

        self.texst=QLabel(self)
        self.texst.setText("Оцените выбранного одногрупника от 1 до 10😇")
        self.texst.move(100,100)
        self.texst.adjustSize()

        self.btn=QPushButton(self)
        self.btn.move(70,150)
        self.btn.setText("Нажми, если он плохой😇")
        self.btn.setFixedWidth(200)
        self.btn.clicked.connect(self.action)

    def action(self):
        
        self.texst.hide()
        self.btn.hide()
        
        self.newt.setText("его уже не спасти 😭😫")
        self.newt.setGeometry(100, 0, self.width(), self.height())

        font = self.newt.font()
        font.setPointSize(15)
        self.newt.setFont(font)
        
def winrar():
    app = QApplication(sys.argv)
    window = megop()  
    window.show()
    sys.exit(app.exec_())
    
    window.show()
    sys.exit(app.exec_())
if __name__ == "__main__":
    winrar()