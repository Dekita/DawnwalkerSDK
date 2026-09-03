#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "QuestConditionDialoguePlaybackStartedType.generated.h"

class UCinematicDialogue;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionDialoguePlaybackStartedType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCinematicDialogue> WaitForDialogue;
    
public:
    UQuestConditionDialoguePlaybackStartedType();

};

