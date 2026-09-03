#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ButtonHoldInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class DOGWOODUI_API UButtonHoldInterface : public UInterface {
    GENERATED_BODY()
};

class DOGWOODUI_API IButtonHoldInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsHoldRequired() const PURE_VIRTUAL(IsHoldRequired, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetHoldProgress() const PURE_VIRTUAL(GetHoldProgress, return 0.0f;);
    
};

