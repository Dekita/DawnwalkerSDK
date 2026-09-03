#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeFocusManager.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeFocusManager : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifySlotsChargedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetSlotsChargedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotsChargedOverride;
    
public:
    UQuestNodeFocusManager();

};

