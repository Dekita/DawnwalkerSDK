#include "VertexColorCasterSettings.h"

FVertexColorCasterSettings::FVertexColorCasterSettings() {
    this->OpacityChannelComponent = EOpacityChannelComponent::Red;
    this->DitherType = EDitherType::NoDither;
    this->FillMode = EFillMode::Interpolate;
    this->Dilation = 0;
    this->UseMultisampling = false;
    this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
    this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
    this->OutputDDSCompressionType = EOutputDDSCompressionType::BC1;
    this->OutputColorLevel = 0;
    this->ColorSpaceEdgeThreshold = 0.00f;
}

