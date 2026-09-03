#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "ERebelAIAttitude.h"
#include "QuestNodeSetFactionRelationship.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetFactionRelationship : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIAttitude AttitudeToSet;
    
public:
    UQuestNodeSetFactionRelationship();

};

