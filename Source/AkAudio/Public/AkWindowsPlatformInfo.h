#pragma once
#include "CoreMinimal.h"
#include "AkWin64PlatformInfo.h"
#include "AkWindowsPlatformInfo.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkWindowsPlatformInfo : public UAkWin64PlatformInfo {
    GENERATED_BODY()
public:
    UAkWindowsPlatformInfo();

};

