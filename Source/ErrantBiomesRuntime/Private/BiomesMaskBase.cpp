#include "BiomesMaskBase.h"
#include "Engine/TextureRenderTarget2D.h"

UBiomesMaskBase::UBiomesMaskBase() {
    this->Size = -1;
    this->ComponentX = -2147483648;
    this->ComponentY = -2147483648;
    this->RenderTarget = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("MaskRenderTarget"));
}


