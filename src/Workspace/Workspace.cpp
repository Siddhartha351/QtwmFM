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

#include "Workspace/Workspace.hpp"

QtwmFMWorkspace::QtwmFMWorkspace(QWidget *Parent)
	: QWidget(Parent), DummyGridLayout(new QGridLayout(
						   this)), // NOLINT(cppcoreguidelines-owning-memory)
	  MainTabWidget(
		  new QTabWidget(this)), // NOLINT(cppcoreguidelines-owning-memory)
	  AddTabButton(new QPushButton(
		  MainTabWidget)), // NOLINT(cppcoreguidelines-owning-memory)
	  FileViewWidget(new QtwmFMFileViewWidget(
		  MainTabWidget)), // NOLINT(cppcoreguidelines-owning-memory)
	  TestingWidget(new QtwmFMFileViewWidget(
		  MainTabWidget)) { // NOLINT(cppcoreguidelines-owning-memory)

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

	const QString TabWidgetQSS{QString(R"(
		)")};

	this->setLayout(DummyGridLayout);
	DummyGridLayout->addWidget(MainTabWidget);
	AddTabButton->setStyleSheet(ButtonQSS);
	AddTabButton->setIcon(QIcon::fromTheme("tab-new"));
	MainTabWidget->setCornerWidget(AddTabButton);
	// Prevent the button from taking focus to avoid Wayland text input issues
	AddTabButton->setFocusPolicy(Qt::NoFocus);

	MainTabWidget->setTabsClosable(true);
	MainTabWidget->setStyleSheet(TabWidgetQSS);
	MainTabWidget->addTab(FileViewWidget, "New Tab");

	// Connect the add tab button to create a new tab
	connect(AddTabButton, &QPushButton::clicked, this,
			[this]() { CreateNewTab(QString()); });

	// Handle tab close requests
	connect(MainTabWidget, &QTabWidget::tabCloseRequested, this,
			[this](int index) {
				QWidget *widget = MainTabWidget->widget(index);
				MainTabWidget->removeTab(index);
				widget->deleteLater();
			});
}

void QtwmFMWorkspace::CreateNewTab(const QString &path) {
	// NOLINTNEXTLINE(cppcoreguidelines-owning-memory)
	auto *newWidget = new QtwmFMFileViewWidget(MainTabWidget);
	int index =
		MainTabWidget->addTab(newWidget, path.isEmpty() ? "New Tab" : path);
	MainTabWidget->setCurrentIndex(index);
}

QtwmFMWorkspace::~QtwmFMWorkspace() = default;
