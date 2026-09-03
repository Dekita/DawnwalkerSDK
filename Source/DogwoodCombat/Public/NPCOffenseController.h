#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NPCOffenseController.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UNPCOffenseController : public UObject {
    GENERATED_BODY()
public:
    UNPCOffenseController();

    UFUNCTION(BlueprintCallable)
    void SelectAttackPattern();
    
};

