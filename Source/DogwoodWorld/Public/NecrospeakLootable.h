#pragma once
#include "CoreMinimal.h"
#include "Lootable.h"
#include "NecrospeakLootable.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API ANecrospeakLootable : public ALootable {
    GENERATED_BODY()
public:
    ANecrospeakLootable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnabledFromNecrospeak();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisabledFromNecrospeak();
    
};

