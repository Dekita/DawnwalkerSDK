#pragma once
#include "CoreMinimal.h"
#include "QuestComponentEntry.generated.h"

class UQuestComponent;

USTRUCT(BlueprintType)
struct FQuestComponentEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UQuestComponent>> Components;
    
    QUEST_API FQuestComponentEntry();
};

