#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ForcedFadeWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class DAWNWALKER_API UForcedFadeWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IForcedFadeWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeOut();
    
};

