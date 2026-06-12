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

#include "Header/Header.hpp"

QtwmFMHeader::QtwmFMHeader(QWidget *parent)
    : QWidget(parent), HeaderLayout(new QHBoxLayout(this)),
      SidebarToggleButton(new QPushButton(this)), ItemsViewButton(new QPushButton(this)),
      SearchButton(new QPushButton(this)), PreviewToggleButton(new QPushButton(this)),
      MenuButton(new QPushButton(this)), MainMenu(new QtwmFMMainMenu(this)) {

    const QString ButtonQSS{R"(
		QPushButton {
			background-color: transparent;
			border: none;
			outline: none;
		}
		QPushButton:hover {
			background-color: transparent;
		}
		QPushButton:pressed {
			background-color: transparent;
		}
	)"};

    SidebarToggleButton->setIcon(QIcon::fromTheme("sidebar-expand-left"));
    SidebarToggleButton->setStyleSheet(ButtonQSS);
    HeaderLayout->addWidget(SidebarToggleButton);

    ItemsViewButton->setIcon(QIcon::fromTheme("view-list-icons"));
    ItemsViewButton->setStyleSheet(ButtonQSS);
    HeaderLayout->addWidget(ItemsViewButton);

    // Display rest on the far right.
    HeaderLayout->addStretch();

    SearchButton->setIcon(QIcon::fromTheme("find"));
    SearchButton->setStyleSheet(ButtonQSS);
    HeaderLayout->addWidget(SearchButton);

    PreviewToggleButton->setIcon(QIcon::fromTheme("preview"));
    PreviewToggleButton->setStyleSheet(ButtonQSS);
    HeaderLayout->addWidget(PreviewToggleButton);

    MenuButton->setMenu(MainMenu);
    MenuButton->setIcon(QIcon::fromTheme("open-menu"));
    MenuButton->setStyleSheet(ButtonQSS + R"(
		QPushButton::menu-indicator {
			image: none;
			width: 0px;
		}
	)");
    HeaderLayout->addWidget(MenuButton);
}
QtwmFMHeader::~QtwmFMHeader() = default;
