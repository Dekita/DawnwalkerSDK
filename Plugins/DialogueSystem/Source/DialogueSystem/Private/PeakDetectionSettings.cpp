#include "PeakDetectionSettings.h"

FPeakDetectionSettings::FPeakDetectionSettings() {
    this->MaxFilteringWindowLeft = 0.00f;
    this->MaxFilteringWindowRight = 0.00f;
    this->MeanFilteringWindowLeft = 0.00f;
    this->MeanFilteringWindowRight = 0.00f;
    this->MinTimeBetweenPeaks = 0.00f;
    this->PeakDetectionMeanDelta = 0.00f;
}

