// Copyright (C) 2011 Alexander Berman
//
// Sonotopy is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef GRIDMAPCIRCUITPARAMETERS_HPP
#define GRIDMAPCIRCUITPARAMETERS_HPP

#include "SonogramMapCircuitParameters.hpp"

namespace sonotopy {

class GridMapCircuitParameters : public SonogramMapCircuitParameters
{
  public:
    GridMapCircuitParameters();
    int gridWidth;
    int gridHeight;
};

}

#endif // GRIDMAPCIRCUITPARAMETERS_HPP
