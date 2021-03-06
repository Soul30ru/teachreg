/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2012  Роман Браун <firdragon76@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

#include <QtGui/QDialog>
#include <QtGui/QFontDialog>
#include <QtGui/QColorDialog>
#include "ui_optionsdlg.h"

namespace Ui
{
	class OptionsDlg;
}

class OptionsDialog : public QDialog
{
	Q_OBJECT
public:
	explicit OptionsDialog(QWidget *parent = 0, Qt::WindowFlags f = 0);
	virtual ~OptionsDialog();
	
	QFont getFont0() const;
	QFont getFont1() const;
	QColor getColor0() const;
	QColor getColor1() const;
	
	void setFont0(const QFont &f0);
	void setFont1(const QFont &f1);
	void setColor0(const QColor &c0);
	void setColor1(const QColor &c1);
	
private slots:
	void on_font0ToolButton_clicked();
	void on_font1ToolButton_clicked();
	void on_color0ToolButton_clicked();
	void on_color1ToolButton_clicked();
	
private:
	Ui::OptionsDlg *ui;
	QFont font0, font1;
	QColor color0, color1;
};

#endif // OPTIONSDIALOG_H
