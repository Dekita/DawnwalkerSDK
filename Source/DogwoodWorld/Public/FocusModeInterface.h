#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FocusModeInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class DOGWOODWORLD_API UFocusModeInterface : public UInterface {
    GENERATED_BODY()
};

class IFocusModeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FVector GetFocusModeSourceLocation() const PURE_VIRTUAL(GetFocusModeSourceLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetFocusModeActiveRange() const PURE_VIRTUAL(GetFocusModeActiveRange, return 0.0f;);
    
};

