#include "MappingImageSettings.h"

FMappingImageSettings::FMappingImageSettings() {
    this->GenerateMappingImage = false;
    this->GenerateTexCoords = false;
    this->GenerateTangents = false;
    this->ReplaceMappingImages = false;
    this->UseFullRetexturing = false;
    this->ApplyNewMaterialIds = false;
    this->UseAutomaticTextureSize = false;
    this->AutomaticTextureSizeMultiplier = 0.00f;
    this->ForcePower2Texture = false;
    this->OnlyParameterizeInvalidUVs = false;
    this->AllowTransparencyMapping = false;
    this->MaximumLayers = 0;
    this->TexCoordLevel = 0;
    this->TexCoordGeneratorType = ETexCoordGeneratorType::Parameterizer;
    this->TangentCalculatorType = ETangentCalculatorType::OrthonormalRightHanded;
    this->OverrideTangentCalculator = false;
    this->OutputMaterialCount = 0;
    this->TangentCalculatorInvertV = false;
    this->InputMaterialCount = 0;
}

