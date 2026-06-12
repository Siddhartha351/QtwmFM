# Copyright (C) 2024-2026 Your Name <your.email@example.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

cmake_minimum_required(VERSION 3.30)
project(QtwmFM VERSION 1.0 LANGUAGES CXX)

# Setting C++ standard
set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Turn on Qt MOC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Turn on for LSPs like clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(
        -std=c++26
        -Wall
        -Wextra
        -Wpedantic
        -pedantic-errors
        -Werror
        -Wshadow
        -Wcast-qual
        -Wformat=2
        -Wmissing-declarations
        -Wnull-dereference
        -Woverloaded-virtual
        -Wsign-conversion
        -Wconversion
        -Wunused
        -Wnon-virtual-dtor
        -Wstack-protector
        -Wstrict-aliasing
        -Wundef
        -Wold-style-cast
        -Wextra-semi
        -Wsuggest-override
        -Wdouble-promotion
)

find_package(Qt6 REQUIRED COMPONENTS 
    Core 
    Gui 
    Widgets 
)

# Project Files
add_executable(qtwmfm
    src/main.cpp

    src/MainWindow/MainWindow.cpp
    src/MainWindow/MainWindow.hpp

    src/Header/Header.cpp
    src/Header/Header.hpp
    src/Header/Menu/Menu.cpp
    src/Header/Menu/Menu.hpp

    src/Workspace/Workspace.cpp
    src/Workspace/Workspace.hpp
    src/Workspace/FileViewWidget/FileViewWidget.cpp
    src/Workspace/FileViewWidget/FileViewWidget.hpp
    src/Workspace/FileViewWidget/ViewPages/IconsViewPage/IconsViewPage.cpp
    src/Workspace/FileViewWidget/ViewPages/IconsViewPage/IconsViewPage.hpp
)

target_include_directories(qtwmfm PRIVATE src)

target_link_libraries(qtwmfm PRIVATE 
    Qt6::Core 
    Qt6::Gui 
    Qt6::Widgets 
)
