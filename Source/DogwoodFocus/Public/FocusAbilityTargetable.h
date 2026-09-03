#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FocusAbilityTargetable.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class DOGWOODFOCUS_API UFocusAbilityTargetable : public UInterface {
    GENERATED_BODY()
};

class DOGWOODFOCUS_API IFocusAbilityTargetable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsBossCharacter() const PURE_VIRTUAL(IsBossCharacter, return false;);
    
};

