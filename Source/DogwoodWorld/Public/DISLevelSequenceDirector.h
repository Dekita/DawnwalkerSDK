#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceDirector.h"
#include "DISInteraction.h"
#include "DISLevelSequenceDirector.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UDISLevelSequenceDirector : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
    UDISLevelSequenceDirector();

    UFUNCTION(BlueprintCallable)
    void TriggerDISInteraction(const FDISInteraction& InteractionData);
    
};

