#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeResetFaction.generated.h"

class UActorReferenceType;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeResetFaction : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> References;
    
public:
    UQuestNodeResetFaction();

};

