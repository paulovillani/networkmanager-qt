/*
    Copyright 2012-2013  Jan Grulich <jgrulich@redhat.com>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) version 3, or any
    later version accepted by the membership of KDE e.V. (or its
    successor approved by the membership of KDE e.V.), which shall
    act as a proxy defined in Section 6 of version 3 of the license.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef NETWORKMANAGERQT_BRIDGE_SETTING_P_H
#define NETWORKMANAGERQT_BRIDGE_SETTING_P_H

#include <QtCore/QString>

namespace NetworkManager
{

class BridgeSettingPrivate
{
public:
    BridgeSettingPrivate();

    QString name;
    QString interfaceName;
    bool multicastSnooping;
    bool stp;
    quint32 priority;
    quint32 forwardDelay;
    quint32 helloTime;
    quint32 maxAge;
    quint32 agingTime;
    QByteArray macAddress;
};

}

#endif // NETWORKMANAGERQT_BRIDGE_SETTING_P_H
