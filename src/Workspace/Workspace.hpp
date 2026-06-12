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
#include "Workspace/FileViewWidget/FileViewWidget.hpp"
#include <QApplication>
#include <QString>
#include <QTabWidget>
#include <QWidget>
#include <qtmetamacros.h>

class QtwmFMWorkspace : public QWidget {
  private:
    Q_OBJECT
    QTabWidget *MainTabWidget;
    QtwmFMFileViewWidget *FileViewWidget;

  public:
    void CreateNewTab(const QString &path);

    QtwmFMWorkspace(QWidget *Parent);
    ~QtwmFMWorkspace() override;

    QtwmFMWorkspace(const QtwmFMWorkspace &) = delete;
    QtwmFMWorkspace(QtwmFMWorkspace &&) = delete;
    QtwmFMWorkspace &operator=(const QtwmFMWorkspace &) = delete;
    QtwmFMWorkspace &operator=(QtwmFMWorkspace &&) = delete;
};
