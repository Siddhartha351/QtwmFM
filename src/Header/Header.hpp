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

#include "Header/Menu/Menu.hpp"
#include <QHBoxLayout>
#include <QPushButton>
#include <QString>
#include <QWidget>
#include <qtmetamacros.h>

class QtwmFMHeader : public QWidget {
  private:
    Q_OBJECT

    QHBoxLayout *HeaderLayout;
    QPushButton *SidebarToggleButton;
    QPushButton *ItemsViewButton;
    QPushButton *SearchButton;
    QPushButton *PreviewToggleButton;
    QPushButton *MenuButton;
    QtwmFMMainMenu *MainMenu;

  public:
    explicit QtwmFMHeader(QWidget *parent);
    ~QtwmFMHeader() override;
    QtwmFMHeader(const QtwmFMHeader &) = delete;
    QtwmFMHeader(QtwmFMHeader &&) = delete;
    QtwmFMHeader &operator=(const QtwmFMHeader &) = delete;
    QtwmFMHeader &operator=(QtwmFMHeader &&) = delete;
};
