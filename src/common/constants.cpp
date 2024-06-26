// This file is part of Heimer.
// Copyright (C) 2024 Jussi Lind <jussi.lind@iki.fi>
//
// Heimer is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// Heimer is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Heimer. If not, see <http://www.gnu.org/licenses/>.

#include "constants.hpp"

#include <QDebug>

namespace Constants {

namespace Application {

QString applicationName()
{
    return APPLICATION_NAME;
}

QString applicationPackageType()
{
#ifndef PACKAGE_TYPE
    return QStringLiteral("N/A");
#else
    return QStringLiteral(PACKAGE_TYPE);
#endif
}

QString applicationVersion()
{
    return APPLICATION_VERSION;
}

IO::AlzFormatVersion alzFormatVersion()
{
    return IO::AlzFormatVersion::V2;
}

QString copyright()
{
    return "Copyright (c) 2018-2024 Jussi Lind";
}

QString fileExtension()
{
    return ".alz";
}

QString qSettingsCompanyName()
{
    return "Heimer";
}

QString webSiteUrl()
{
    return "http://juzzlin.github.io/Heimer";
}

QString qSettingsSoftwareName()
{
    return applicationName();
}

QString releasesUrl()
{
    return "https://github.com/juzzlin/Heimer/releases";
}

QString supportSiteUrl()
{
    return "https://paypal.me/juzzlin";
}

QString translationsResourceBase()
{
    return ":/translations/heimer_";
}

} // namespace Application

namespace Settings {

QString defaultsSettingGroup()
{
    return "Defaults";
}

double defaultArrowSize()
{
    return 20;
}

double defaultEdgeWidth()
{
    return 1.0;
}

int defaultShadowEffectOffset()
{
    return 3;
}

int defaultShadowEffectBlurRadius()
{
    return 5;
}

int defaultSelectedItemShadowEffectBlurRadius()
{
    return 50;
}

QColor defaultShadowEffectShadowColor()
{
    return { 96, 96, 96 };
}

QColor defaultShadowEffectSelectedItemShadowColor()
{
    return { 255, 0, 0 };
}

} // namespace Settings

namespace Misc {

QString threeDots()
{
    return "...";
}

} // namespace Misc

} // namespace Constants
