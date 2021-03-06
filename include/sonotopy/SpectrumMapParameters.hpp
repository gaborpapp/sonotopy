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

#ifndef _SpectrumMapParameters_hpp_
#define _SpectrumMapParameters_hpp_

#include "SpectrumAnalyzer.hpp"
#include "SpectrumBinDivider.hpp"
#include <vector>

namespace sonotopy {

class SpectrumMapParameters {
public:
  typedef enum {
    TimeBased,
    ErrorDriven
  } AdaptationStrategy;

  SpectrumMapParameters();

  float trajectorySmoothness;
  AdaptationStrategy adaptationStrategy;

  // parameters for time-based adaptation
  float initialTrainingLengthSecs;
  float initialNeighbourhoodParameter;
  float initialAdaptationTimeSecs;
  float normalNeighbourhoodParameter;
  float normalAdaptationTimeSecs;

  // parameters for error-driven adaptation
  float adaptationPlasticity;
  float neighbourhoodPlasticity;
  float neighbourhoodParameterMin;
  float errorThresholdLow;
  float errorThresholdHigh;
  float errorIntegrationTimeMs;
};

}

#endif
