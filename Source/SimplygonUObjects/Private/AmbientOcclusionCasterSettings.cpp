#include "AmbientOcclusionCasterSettings.h"

FAmbientOcclusionCasterSettings::FAmbientOcclusionCasterSettings() {
    this->OpacityChannelComponent = EOpacityChannelComponent::Red;
    this->DitherType = EDitherType::NoDither;
    this->FillMode = EFillMode::Interpolate;
    this->Dilation = 0;
    this->UseMultisampling = false;
    this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
    this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
    this->OutputDDSCompressionType = EOutputDDSCompressionType::BC1;
    this->RaysPerPixel = 0;
    this->OcclusionFalloff = 0.00f;
    this->OcclusionMultiplier = 0.00f;
    this->UseSimpleOcclusionMode = false;
    this->FlipBackfacingNormals = false;
}

