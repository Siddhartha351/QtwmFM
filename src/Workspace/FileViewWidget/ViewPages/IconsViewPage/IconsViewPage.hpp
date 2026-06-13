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
#include <QGridLayout>
#include <QWidget>
#include <qtmetamacros.h>

class IconsViewPage : public QWidget {
	Q_OBJECT
	QGridLayout *MainIconsLayout;

  public:
	IconsViewPage(QWidget *Parent);
	~IconsViewPage() override;

	IconsViewPage(const IconsViewPage &) = delete;
	IconsViewPage(IconsViewPage &&) = delete;
	IconsViewPage &operator=(const IconsViewPage &) = delete;
	IconsViewPage &operator=(IconsViewPage &&) = delete;
};
