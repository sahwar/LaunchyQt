/*
Calcy - plugin for LaunchyQt
Copyright (C) 2018 Samson Wang

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

#pragma once

#include <string>

class Calculator {
public:
    static bool calculate(const std::string& expr, double& result);
    static bool octStr(int num, std::string& reslut);
    static bool decStr(int num, std::string& reslut);
    static bool hexStr(int num, std::string& reslut);
    static bool binStr(int num, std::string& reslut);
};



