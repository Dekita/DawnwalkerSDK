#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodePauseAllDialogues.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePauseAllDialogues : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    UQuestNodePauseAllDialogues();

};

