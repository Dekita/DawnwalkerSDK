#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EQuickSlotConditionType.h"
#include "EQuickSlotType.h"
#include "QuestConditionQuickSlotType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionQuickSlotType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuickSlotType QuickSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuickSlotConditionType PauseUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireUserInput;
    
public:
    UQuestConditionQuickSlotType();

};

