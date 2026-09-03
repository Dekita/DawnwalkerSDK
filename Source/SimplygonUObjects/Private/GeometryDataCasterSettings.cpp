#include "GeometryDataCasterSettings.h"

FGeometryDataCasterSettings::FGeometryDataCasterSettings() {
    this->OpacityChannelComponent = EOpacityChannelComponent::Red;
    this->DitherType = EDitherType::NoDither;
    this->FillMode = EFillMode::Interpolate;
    this->Dilation = 0;
    this->UseMultisampling = false;
    this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
    this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
    this->OutputDDSCompressionType = EOutputDDSCompressionType::BC1;
    this->GeometryDataFieldType = EGeometryDataFieldType::Coords;
    this->GeometryDataFieldIndex = 0;
    this->MappingLayerIndex = 0;
}

