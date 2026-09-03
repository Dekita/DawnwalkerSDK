#include "DisplacementCasterSettings.h"

FDisplacementCasterSettings::FDisplacementCasterSettings() {
    this->OpacityChannelComponent = EOpacityChannelComponent::Red;
    this->DitherType = EDitherType::NoDither;
    this->FillMode = EFillMode::Interpolate;
    this->Dilation = 0;
    this->UseMultisampling = false;
    this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
    this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
    this->OutputDDSCompressionType = EOutputDDSCompressionType::BC1;
    this->DistanceScaling = 0.00f;
    this->GenerateScalarDisplacement = false;
    this->OutputToTessellatedAttributes = false;
    this->GenerateTangentSpaceDisplacement = false;
    this->NormalMapTexCoordLevel = 0;
}

