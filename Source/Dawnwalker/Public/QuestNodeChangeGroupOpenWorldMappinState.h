#pragma once
#include "CoreMinimal.h"
#include "EMappinState.h"
#include "OpenWorldGroupRow.h"
#include "QuestNode.h"
#include "QuestNodeChangeGroupOpenWorldMappinState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeChangeGroupOpenWorldMappinState : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappinState NewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenWorldGroupRow GroupRow;
    
public:
    UQuestNodeChangeGroupOpenWorldMappinState();

};

