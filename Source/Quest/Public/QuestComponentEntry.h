#pragma once
#include "CoreMinimal.h"
#include "QuestComponentEntry.generated.h"

class UQuestComponent;

USTRUCT(BlueprintType)
struct QUEST_API FQuestComponentEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UQuestComponent>> Components;
    
    FQuestComponentEntry();
};

