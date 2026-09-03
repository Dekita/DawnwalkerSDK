#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "EPlayerFormSelectionPolicy.h"
#include "QuestNodeChangePlayerFormSelectionPolicy.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeChangePlayerFormSelectionPolicy : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerFormSelectionPolicy NewPolicy;
    
public:
    UQuestNodeChangePlayerFormSelectionPolicy();

};

