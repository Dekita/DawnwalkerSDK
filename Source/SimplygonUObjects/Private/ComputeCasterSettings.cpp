#include "ComputeCasterSettings.h"

FComputeCasterSettings::FComputeCasterSettings() {
    this->OpacityChannelComponent = EOpacityChannelComponent::Red;
    this->DitherType = EDitherType::NoDither;
    this->FillMode = EFillMode::Interpolate;
    this->Dilation = 0;
    this->UseMultisampling = false;
    this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
    this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
    this->OutputDDSCompressionType = EOutputDDSCompressionType::BC1;
    this->OutputColorSpace = EOutputColorSpace::Undefined;
    this->CastLayersFrontToBack = false;
    this->MaxCastLayers = 0;
    this->ShaderCodeInputMode = EShaderCodeInputMode::Source;
}

