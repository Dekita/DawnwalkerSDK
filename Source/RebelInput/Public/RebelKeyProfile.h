#pragma once
#include "CoreMinimal.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "RebelKeyProfile.generated.h"

UCLASS(Blueprintable)
class REBELINPUT_API URebelKeyProfile : public UEnhancedPlayerMappableKeyProfile {
    GENERATED_BODY()
public:
    URebelKeyProfile();

};

