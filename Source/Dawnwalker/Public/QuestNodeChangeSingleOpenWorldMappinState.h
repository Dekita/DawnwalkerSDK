#pragma once
#include "CoreMinimal.h"
#include "EMappinState.h"
#include "OpenWorldMappinRow.h"
#include "QuestNode.h"
#include "QuestNodeChangeSingleOpenWorldMappinState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeChangeSingleOpenWorldMappinState : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappinState NewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenWorldMappinRow MappinRow;
    
public:
    UQuestNodeChangeSingleOpenWorldMappinState();

};

