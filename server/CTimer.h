/*
===============================================================================

    Battle City - CTimer header file
    Copyright (C) 2005-2013  battlecity.org

    This file is part of Battle City.

    Battle City is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Battle City is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Battle City.  If not, see <http://www.gnu.org/licenses/>.
===============================================================================
*/
#ifndef _CTimer
#define _CTimer

#include "CServer.h"

class CTime {

    private:
        float dt, td, td2;
        long long       frequency;									// Timer Frequency
        float         resolution;									// Timer Resolution
        unsigned long mm_timer_start;								// Multimedia Timer Start Value
        unsigned long mm_timer_elapsed;								// Multimedia Timer Elapsed Time

    public:
        CTime();
        void Update();
        float Get_dt() const;
        float GetTime() const;
        void Initialize();
};

#endif
