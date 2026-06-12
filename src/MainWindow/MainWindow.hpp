/*
 * Copyright (C) 2026 Siddhartha Narayan Chakraborty
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once
#include "Header/Header.hpp"
#include "Workspace/Workspace.hpp"
#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <qtmetamacros.h>

class MainWindow : public QMainWindow {
  private:
    Q_OBJECT
    // As we cant add a layout directly to the QMainWindow class,
    // we have to add a QWidget as a dummy to the QMainWindow and
    // set it to the central widget. Then we can add our custom
    // layout logic to that widget.
    QWidget *CentralDummyWidget;
    QVBoxLayout *MainVLayout;
    QtwmFMHeader *Header;
    QtwmFMWorkspace *MainWorkspace;

  public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    MainWindow(const MainWindow &) = delete;
    MainWindow(MainWindow &&) = delete;
    MainWindow &operator=(const MainWindow &) = delete;
    MainWindow &operator=(MainWindow &&) = delete;
};
