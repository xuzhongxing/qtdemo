cmake_minimum_required(VERSION 3.16)

project(QMLLibraryDemo VERSION 1.0 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(QML_IMPORT_PATH "E:/build_libqml")

find_package(Qt6 COMPONENTS Quick Gui REQUIRED)
qt_policy(SET QTP0001 OLD)
add_subdirectory(qmllibs/demolib)

qt_add_executable(app
    main.cpp
)

qt_add_qml_module(app
    URI hello
    VERSION 1.0
    QML_FILES
        main.qml
)

target_link_libraries(app PRIVATE Qt6::Gui Qt6::Quick)

