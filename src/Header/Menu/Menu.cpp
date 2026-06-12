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

#include "Header/Menu/Menu.hpp"

QtwmFMMainMenu::QtwmFMMainMenu(QWidget *parent)
    : QMenu(parent), MountingSubMenu(new QMenu(this)), ViewSubMenu(new QMenu(this)),
      SettingsSubMenu(new QMenu(this)), HelpMenu(new QMenu(this)) {

    const QString MenuQSS{QString(R"(
	QMenu {
		border: 1px solid %1;
		border-radius: 10px;
		padding: 5px;
	}

	QMenu::item {
		padding: 6px 24px;
		margin: 2px 4px;
		border-radius: 6px;
	}

	QMenu::item:selected {
		background-color: %1;
		padding: 6px 24px;
		margin: 2px 4px;
		border-radius: 6px;
	}

	QMenu::separator {
		background-color: %1;
		height: 1px;
		margin: 4px 10px;
	}	
	)")
			      .arg(QApplication::palette().light().color().name())};

    // Mounting Sub-Menu
    MountingSubMenu->setStyleSheet(MenuQSS);
    MountingSubMenu->setIcon(QIcon::fromTheme("media-mount"));
    MountingSubMenu->setTitle("Mounting");
    MountingSubMenu->addAction("Mount Drive");
    MountingSubMenu->addAction("Unmount Dirve");
    MountingSubMenu->addAction("Network Drives");
    MountingSubMenu->addAction("Show all Drives");

    // View Sub-Menu
    ViewSubMenu->setStyleSheet(MenuQSS);
    ViewSubMenu->setIcon(QIcon::fromTheme("view-list-icons"));
    ViewSubMenu->setTitle("Icon View");
    ViewSubMenu->addAction("Small Icons");
    ViewSubMenu->addAction("Medium Icons");
    ViewSubMenu->addAction("Large Icons");
    ViewSubMenu->addAction("Details");
    ViewSubMenu->addAction("List");

    // Settings Sub-Menu
    SettingsSubMenu->setStyleSheet(MenuQSS);
    SettingsSubMenu->setIcon(QIcon::fromTheme("configure"));
    SettingsSubMenu->setTitle("Settings");
    SettingsSubMenu->addAction("Open Settings (UI)");
    SettingsSubMenu->addAction("Open Settings (File)");
    SettingsSubMenu->addAction("Open Config Folder");

    // Main Menu
    this->setStyleSheet(MenuQSS);
    this->addAction("Batch New");
    this->addAction("Batch Rename");
    this->addAction("Search Disk");
    this->addMenu(MountingSubMenu);
    this->addSeparator();
    this->addMenu(ViewSubMenu);
    this->addAction("Toggle Sidebar");
    this->addAction("Toggle Statusbar");
    this->addAction("Toggle Preview");
    this->addSeparator();
    this->addMenu(SettingsSubMenu);
    this->addAction("Help");
}
QtwmFMMainMenu::~QtwmFMMainMenu() = default;
