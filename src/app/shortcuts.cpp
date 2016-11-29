/*
 * Copyright: 2016 Canonical Ltd.
 *
 * This file is part of ubuntu-terminal-app
 *
 * ubuntu-terminal-app is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ubuntu-terminal-app is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Florian Boucault <florian.boucault@canonical.com>
 */

#include "shortcuts.h"
#include <QKeySequence>

Shortcuts::Shortcuts()
{
}


QString Shortcuts::keycodeToString(int keycode)
{
    QKeySequence sequence(keycode);
    return sequence.toString();
}
