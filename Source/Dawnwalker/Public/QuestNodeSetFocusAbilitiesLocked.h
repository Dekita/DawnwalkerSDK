#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeSetFocusAbilitiesLocked.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetFocusAbilitiesLocked : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusAbilitiesMenuLocked;
    
public:
    UQuestNodeSetFocusAbilitiesLocked();

};

