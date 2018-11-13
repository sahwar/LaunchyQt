/*
Verby: Plugin for Launchy
Copyright (C) 2009  Simon Capewell

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#pragma once

#include <QList>
#include "PluginInterface.h"
#include "CatalogItem.h"
#include "InputData.h"
class Gui;

class Verby : public QObject, public PluginInterface {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID PLUGININTERFACE_IID)
    Q_INTERFACES(PluginInterface)
public:
    Verby();
    virtual ~Verby();

    virtual int msg(int msgId, void* wParam, void* lParam);

private:
    void getID(uint* id);
    void setPath(QString* path);
    void getName(QString* name);
    void getResults(QList<InputData>* inputData, QList<CatItem>* results);
    int launchItem(QList<InputData>* inputData, CatItem* item);
    void doDialog(QWidget* parent, QWidget** dialog);
    void endDialog(bool accept);
    void getLabels(QList<InputData>* inputData);
    void init();
    bool isMatch(const QString& text1, const QString& text2);
    void addCatItem(QString text, QList<CatItem>* results, QString fullName, QString shortName, QString iconName);
    void updateUsage(CatItem& item);
    QString getIcon();
    QString getIconPath() const;

    //void getCatalog(QList<CatItem>* items);
private:
    QString m_libPath;
    Gui* m_gui;
    const uint HASH_VERBY;
    const uint HASH_FILE;
    const uint HASH_DIR;
    const uint HASH_LINK;
};

