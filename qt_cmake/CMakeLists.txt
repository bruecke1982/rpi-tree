
CMAKE_MINIMUM_REQUIRED(VERSION 3.1)
PROJECT(QtCmakeExample)

SET(CMAKE_CXX_STANDARD 11)
SET(EXE_NAME QtCmakeExample)
SET(INSTALL_CONFIGURATIONS Release Debug RelWithDebInfo)

SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)


set ( SOURCES
   main.cpp
   mainwindow.cpp
   mainwindow.h
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
         Concurrent )

IF (DEFINED QT5_PATH)
FIND_PACKAGE(Qt5 COMPONENTS ${QT_MODULES} PATHS ${QT5_PATH})
ENDIF (DEFINED QT5_PATH)


ADD_EXECUTABLE(${EXE_NAME} ${SOURCES})
TARGET_LINK_LIBRARIES(${EXE_NAME}
                        Qt5::Widgets
                        Qt5::Gui
                        Qt5::Core
                      )

