#include "GenerateLightmapTexCoordSettings.h"

FGenerateLightmapTexCoordSettings::FGenerateLightmapTexCoordSettings() {
    this->GenerateLightmapTexCoord = false;
    this->LightmapTexCoordLevel = 0;
    this->ChartAggregatorMode = EChartAggregatorMode::TextureSizeProportions;
    this->TextureWidth = 0;
    this->TextureHeight = 0;
    this->GutterSpace = 0;
    this->SourceTexCoordLevel = 0;
}

