#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase_TEMP.h"
#include "QuestNodeResetReactionProfileForNPCs.generated.h"

class UBaseStubReference;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeResetReactionProfileForNPCs : public UQuestNodeWaitingBase_TEMP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseStubReference*> NPCReferences;
    
public:
    UQuestNodeResetReactionProfileForNPCs();

};

