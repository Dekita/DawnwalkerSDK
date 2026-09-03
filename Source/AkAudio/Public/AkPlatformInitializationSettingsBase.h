#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkPlatformInitializationSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AKAUDIO_API UAkPlatformInitializationSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UAkPlatformInitializationSettingsBase();

};

