#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatHelperIndicator.generated.h"

UINTERFACE(Blueprintable)
class UCombatHelperIndicator : public UInterface {
    GENERATED_BODY()
};

class ICombatHelperIndicator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIndicatorVisible(bool bVisible);
    
};

