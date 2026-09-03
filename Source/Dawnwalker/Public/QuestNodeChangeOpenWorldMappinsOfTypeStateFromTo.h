#pragma once
#include "CoreMinimal.h"
#include "EMappinState.h"
#include "EMappinType.h"
#include "QuestNode.h"
#include "QuestNodeChangeOpenWorldMappinsOfTypeStateFromTo.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeChangeOpenWorldMappinsOfTypeStateFromTo : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappinType MappinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappinState OldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappinState NewState;
    
public:
    UQuestNodeChangeOpenWorldMappinsOfTypeStateFromTo();

};

