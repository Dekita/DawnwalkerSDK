#pragma once
#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkWinGDKPlatformInfo.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkWinGDKPlatformInfo : public UAkPlatformInfo {
    GENERATED_BODY()
public:
    UAkWinGDKPlatformInfo();

};

