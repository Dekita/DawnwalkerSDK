#include "ChartAggregatorSettings.h"

FChartAggregatorSettings::FChartAggregatorSettings() {
    this->ChartAggregatorMode = EChartAggregatorMode::TextureSizeProportions;
    this->SurfaceAreaScale = ESurfaceAreaScale::LargestInstance;
    this->OriginalTexCoordLevel = 0;
    this->SeparateOverlappingCharts = false;
    this->SplitMirroredCharts = false;
    this->LockUVRotation = false;
}

