#-------------------------------------------------
#
# Project created by QtCreator 2015-11-25T09:22:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

TARGET = MathWorks
TEMPLATE = app


CONFIG += c++11
macx {
    QMAKE_CXXFLAGS += -std=c++11 -stdlib=libc++
    QMAKE_CFLAGS += -std=c++11 -stdlib=libc++
}

SOURCES += main.cpp \
    mainmenu.cpp \
    loginout.cpp \
    gamesix.cpp \
    tutorial.cpp \
    leaderboard.cpp \
    settings.cpp \
    gameover.cpp \
    boardmodel.cpp \
    gamemodel.cpp \
    passvalues.cpp \
    scoreentry.cpp \
    mathgametimer.cpp \
    leaderboardmodel.cpp

HEADERS  += \
    mainmenu.h \
    loginout.h \
    gamesix.h \
    tutorial.h \
    leaderboard.h \
    settings.h \
    gameover.h \
    boardmodel.h \
    gamemodel.h \
    passvalues.h \
    scoreentry.h \
    mathgametimer.h \
    leaderboardmodel.h

FORMS    += \
    mainmenu.ui \
    loginout.ui \
    gamesix.ui \
    tutorial.ui \
    leaderboard.ui \
    settings.ui \
    gameover.ui

RESOURCES += \
    resources.qrc

