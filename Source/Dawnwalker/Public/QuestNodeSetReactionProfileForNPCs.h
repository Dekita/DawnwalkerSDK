#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase_TEMP.h"
#include "Templates/SubclassOf.h"
#include "QuestNodeSetReactionProfileForNPCs.generated.h"

class UAIReactionsConfig;
class UBaseStubReference;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetReactionProfileForNPCs : public UQuestNodeWaitingBase_TEMP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIReactionsConfig> ReactionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseStubReference*> NPCReferences;
    
public:
    UQuestNodeSetReactionProfileForNPCs();

};

