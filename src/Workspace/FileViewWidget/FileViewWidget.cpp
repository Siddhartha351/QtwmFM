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

#include "Workspace/FileViewWidget/FileViewWidget.hpp"

QtwmFMFileViewWidget::QtwmFMFileViewWidget(QWidget *Parent)
	: QWidget(Parent), MainViewsHLayout(new QHBoxLayout(this)),
	  PreviewSplitter(new QSplitter(Qt::Horizontal, this)),
	  MainViewsStack(new QStackedWidget(this)) {

	this->setLayout(MainViewsHLayout);
	MainViewsHLayout->addWidget(MainViewsStack); // Add stretch factor 1
	MainViewsHLayout->addWidget(PreviewSplitter);
}
QtwmFMFileViewWidget::~QtwmFMFileViewWidget() = default;
