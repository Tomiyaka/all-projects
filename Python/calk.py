
from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):
        def setupUi(self, MainWindow):
                MainWindow.setObjectName("MainWindow")
                MainWindow.setEnabled(True)
                MainWindow.resize(385, 380)
                MainWindow.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.centralwidget = QtWidgets.QWidget(MainWindow)
                self.centralwidget.setObjectName("centralwidget")
                self.result = QtWidgets.QLabel(self.centralwidget)
                self.result.setGeometry(QtCore.QRect(0, 0, 385, 50))
                font = QtGui.QFont()
                font.setFamily("MS Sans Serif")
                font.setPointSize(10)
                font.setBold(True)
                font.setWeight(75)
                self.result.setFont(font)
                self.result.setMouseTracking(False)
                self.result.setTabletTracking(False)
                self.result.setStyleSheet("background-color: rgb(179, 192, 200);\n"
        "color: rgb(118, 118, 118)")
                self.result.setObjectName("result")
                self.pb0 = QtWidgets.QPushButton(self.centralwidget)
                self.pb0.setGeometry(QtCore.QRect(0, 290, 150, 90))
                self.pb0.setStyleSheet("background-color: rgb(255, 170, 127);")
                self.pb0.setObjectName("pb0")
                self.equal = QtWidgets.QPushButton(self.centralwidget)
                self.equal.setGeometry(QtCore.QRect(150, 289, 235, 90))
                self.equal.setStyleSheet("color: rgb(255, 255, 255);\n"
        "background-color: rgb(73, 100, 255);\n"
        "")
                self.equal.setObjectName("equal")
                self.pb1 = QtWidgets.QPushButton(self.centralwidget)
                self.pb1.setGeometry(QtCore.QRect(0, 50, 75, 80))
                font = QtGui.QFont()
                font.setBold(False)
                font.setWeight(50)
                self.pb1.setFont(font)
                self.pb1.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb1.setObjectName("pb1")
                self.pb2 = QtWidgets.QPushButton(self.centralwidget)
                self.pb2.setGeometry(QtCore.QRect(75, 50, 75, 80))
                self.pb2.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb2.setObjectName("pb2")
                self.pb3 = QtWidgets.QPushButton(self.centralwidget)
                self.pb3.setGeometry(QtCore.QRect(150, 50, 75, 80))
                self.pb3.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb3.setObjectName("pb3")
                self.pb4 = QtWidgets.QPushButton(self.centralwidget)
                self.pb4.setGeometry(QtCore.QRect(0, 130, 75, 80))
                self.pb4.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb4.setObjectName("pb4")
                self.pb5 = QtWidgets.QPushButton(self.centralwidget)
                self.pb5.setGeometry(QtCore.QRect(75, 130, 75, 80))
                self.pb5.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb5.setObjectName("pb5")
                self.pb6 = QtWidgets.QPushButton(self.centralwidget)
                self.pb6.setGeometry(QtCore.QRect(150, 130, 75, 80))
                self.pb6.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb6.setObjectName("pb6")
                self.pb7 = QtWidgets.QPushButton(self.centralwidget)
                self.pb7.setGeometry(QtCore.QRect(0, 210, 75, 80))
                self.pb7.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb7.setObjectName("pb7")
                self.pb8 = QtWidgets.QPushButton(self.centralwidget)
                self.pb8.setGeometry(QtCore.QRect(75, 210, 75, 80))
                self.pb8.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb8.setObjectName("pb8")
                self.pb9 = QtWidgets.QPushButton(self.centralwidget)
                self.pb9.setGeometry(QtCore.QRect(150, 210, 75, 80))
                self.pb9.setStyleSheet("background-color: rgb(255, 170, 127);\n"
        "color: rgb(0, 0, 0);")
                self.pb9.setObjectName("pb9")
                self.ydpo1 = QtWidgets.QPushButton(self.centralwidget)
                self.ydpo1.setGeometry(QtCore.QRect(225, 50, 80, 80))
                self.ydpo1.setStyleSheet("background-color: rgb(191, 127, 95);\n"
        "color: rgb(0, 0, 255);")
                self.ydpo1.setObjectName("ydpo1")
                self.ydall = QtWidgets.QPushButton(self.centralwidget)
                self.ydall.setGeometry(QtCore.QRect(305, 50, 80, 80))
                self.ydall.setStyleSheet("background-color: rgb(191, 127, 95);\n"
        "color: rgb(0, 0, 255);")
                self.ydall.setObjectName("ydall")
                self.plus = QtWidgets.QPushButton(self.centralwidget)
                self.plus.setGeometry(QtCore.QRect(225, 130, 80, 80))
                self.plus.setStyleSheet("background-color: rgb(191, 127, 95);\n"
        "color: rgb(0, 0, 255);")
                self.plus.setObjectName("plus")
                self.ymn = QtWidgets.QPushButton(self.centralwidget)
                self.ymn.setGeometry(QtCore.QRect(225, 210, 80, 80))
                self.ymn.setStyleSheet("background-color: rgb(191, 127, 95);\n"
        "color: rgb(0, 0, 255);")
                self.ymn.setObjectName("ymn")
                self.minus = QtWidgets.QPushButton(self.centralwidget)
                self.minus.setGeometry(QtCore.QRect(305, 130, 80, 80))
                self.minus.setStyleSheet("background-color: rgb(191, 127, 95);\n"
        "color: rgb(0, 0, 255);")
                self.minus.setObjectName("minus")
                self.delit = QtWidgets.QPushButton(self.centralwidget)
                self.delit.setGeometry(QtCore.QRect(305, 210, 80, 80))
                self.delit.setStyleSheet("background-color: rgb(191, 127, 95);\n"
        "color: rgb(0, 0, 255);")
                self.delit.setObjectName("delit")
                MainWindow.setCentralWidget(self.centralwidget)
                self.statusbar = QtWidgets.QStatusBar(MainWindow)
                self.statusbar.setObjectName("statusbar")
                MainWindow.setStatusBar(self.statusbar)

                self.retranslateUi(MainWindow)
                QtCore.QMetaObject.connectSlotsByName(MainWindow)

        def retranslateUi(self, MainWindow):
                _translate = QtCore.QCoreApplication.translate
                MainWindow.setWindowTitle(_translate("MainWindow", "Гречка счётчик"))
                self.result.setText(_translate("MainWindow", "0"))
                self.pb0.setText(_translate("MainWindow", "0"))
                self.equal.setText(_translate("MainWindow", "="))
                self.pb1.setText(_translate("MainWindow", "1"))
                self.pb2.setText(_translate("MainWindow", "2"))
                self.pb3.setText(_translate("MainWindow", "3"))
                self.pb4.setText(_translate("MainWindow", "4"))
                self.pb5.setText(_translate("MainWindow", "5"))
                self.pb6.setText(_translate("MainWindow", "6"))
                self.pb7.setText(_translate("MainWindow", "7"))
                self.pb8.setText(_translate("MainWindow", "8"))
                self.pb9.setText(_translate("MainWindow", "9"))
                self.ydpo1.setText(_translate("MainWindow", "<x|"))
                self.ydall.setText(_translate("MainWindow", "C"))
                self.plus.setText(_translate("MainWindow", "+"))
                self.ymn.setText(_translate("MainWindow", "*"))
                self.minus.setText(_translate("MainWindow", "-"))
                self.delit.setText(_translate("MainWindow", "/"))

                self.pb0.clicked.connect(lambda:self.wrtnumber(self.pb0.text()))
                self.pb1.clicked.connect(lambda:self.wrtnumber(self.pb1.text()))
                self.pb2.clicked.connect(lambda:self.wrtnumber(self.pb2.text()))
                self.pb3.clicked.connect(lambda:self.wrtnumber(self.pb3.text()))
                self.pb4.clicked.connect(lambda:self.wrtnumber(self.pb4.text()))
                self.pb5.clicked.connect(lambda:self.wrtnumber(self.pb5.text()))
                self.pb6.clicked.connect(lambda:self.wrtnumber(self.pb6.text()))
                self.pb7.clicked.connect(lambda:self.wrtnumber(self.pb7.text()))
                self.pb8.clicked.connect(lambda:self.wrtnumber(self.pb8.text()))
                self.pb9.clicked.connect(lambda:self.wrtnumber(self.pb9.text()))
                self.equal.clicked.connect(lambda:self.wrtnumber(self.equal.text()))
                self.plus.clicked.connect(lambda:self.wrtnumber(self.plus.text()))
                self.minus.clicked.connect(lambda:self.wrtnumber(self.minus.text()))
                self.ymn.clicked.connect(lambda:self.wrtnumber(self.ymn.text()))
                self.delit.clicked.connect(lambda:self.wrtnumber(self.delit.text()))
        
        
                self.equal.clicked.connect(self.resulting)

        def wrtnumber(self, num):
                if self.result.text()=="0":
                        self.result.setText(num)
                else:
                        self.result.setText(self.result.text()+num)
        def resulting(self):
                res=eval(self.result.text()[:-1])
                self.result.setText(self.result.text()+str(res))

if __name__ == "__main__":
        import sys
        app = QtWidgets.QApplication(sys.argv)
        MainWindow = QtWidgets.QMainWindow()
        ui = Ui_MainWindow()
        ui.setupUi(MainWindow)
        MainWindow.show()
        sys.exit(app.exec_())
