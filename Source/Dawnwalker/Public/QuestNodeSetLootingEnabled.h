#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeSetLootingEnabled.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetLootingEnabled : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLootingEnabled;
    
public:
    UQuestNodeSetLootingEnabled();

};

