#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatHelperIndicator.generated.h"

UINTERFACE(Blueprintable)
class DAWNWALKER_API UCombatHelperIndicator : public UInterface {
    GENERATED_BODY()
};

class ICombatHelperIndicator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIndicatorVisible(bool bVisible);
    
};

