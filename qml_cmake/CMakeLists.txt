
CMAKE_MINIMUM_REQUIRED(VERSION 3.1)
PROJECT(QtCmakeExample)

SET(QT5_PATH "/usr" CACHE PATH "qt5 lib path")
SET(CMAKE_CXX_STANDARD 11)
SET(EXE_NAME QtCmakeExample)
SET(INSTALL_CONFIGURATIONS Release Debug RelWithDebInfo)

SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)


set ( SOURCES
   main.cpp
   testhandler.cpp
   testhandler.h
   main.qml
   )


SET(CMAKE_AUTORCC ON)
SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTOUIC ON)

SET(QT_MODULES
         Core
         Gui
         Widgets
         DBus
         SerialPort
         Concurrent 
         Qml
         Quick)

FIND_PACKAGE(Qt5 COMPONENTS ${QT_MODULES} PATHS ${QT5_PATH})

QT5_ADD_RESOURCES(qml.qrc)

ADD_EXECUTABLE(${EXE_NAME} ${SOURCES} qml.qrc)
TARGET_LINK_LIBRARIES(${EXE_NAME}
                        Qt5::Widgets
                        Qt5::Gui
                        Qt5::Core
                        Qt5::Quick
                        Qt5::Qml
                      )

