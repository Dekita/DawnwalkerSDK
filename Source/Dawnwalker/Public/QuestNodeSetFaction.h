#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeSetFaction.generated.h"

class UActorReferenceType;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetFaction : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> References;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
public:
    UQuestNodeSetFaction();

};

