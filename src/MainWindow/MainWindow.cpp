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

#include "MainWindow/MainWindow.hpp"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent), CentralDummyWidget(new QWidget(this)),
	  MainVLayout(new QVBoxLayout(CentralDummyWidget)),
	  Header(new QtwmFMHeader(this)), MainWorkspace(new QtwmFMWorkspace(this)) {

	setWindowTitle("Twm Files");
	resize(800, 600);

	this->setCentralWidget(CentralDummyWidget);
	CentralDummyWidget->setLayout(MainVLayout);
	MainVLayout->addWidget(Header);
	MainVLayout->addWidget(MainWorkspace, 1); // Add the '1' to make it expand
}
MainWindow::~MainWindow() = default;
