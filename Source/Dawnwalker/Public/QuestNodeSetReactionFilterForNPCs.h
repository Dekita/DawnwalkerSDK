#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNodeWaitingBase_TEMP.h"
#include "ERebelAISituationsFilterMode.h"
#include "QuestNodeSetReactionFilterForNPCs.generated.h"

class UBaseStubReference;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetReactionFilterForNPCs : public UQuestNodeWaitingBase_TEMP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAISituationsFilterMode FilterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Situations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseStubReference*> NPCReferences;
    
public:
    UQuestNodeSetReactionFilterForNPCs();

};

