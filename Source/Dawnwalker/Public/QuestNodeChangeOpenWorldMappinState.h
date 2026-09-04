#pragma once
#include "CoreMinimal.h"
#include "EMappinState.h"
#include "QuestNode.h"
#include "QuestNodeChangeOpenWorldMappinState.generated.h"

class UOpenWorldContent;

UCLASS(Blueprintable)
class UQuestNodeChangeOpenWorldMappinState : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappinState NewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOpenWorldContent* OpenWorldContent;
    
public:
    UQuestNodeChangeOpenWorldMappinState();

};

