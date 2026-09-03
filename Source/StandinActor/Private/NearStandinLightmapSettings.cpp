#include "NearStandinLightmapSettings.h"

FNearStandinLightmapSettings::FNearStandinLightmapSettings() {
    this->bGenerateLightmapTexCoords = false;
    this->TexCoordResolution = 0;
    this->TexCoordGutterSpace = 0;
    this->TexCoordPackerMode = EChartAggregatorMode::TextureSizeProportions;
    this->SourceTexCoordMode = ESourceTexCoordMode::Auto;
    this->SourceTexCoordIndex = 0;
}

