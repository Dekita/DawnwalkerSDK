#pragma once
#include "CoreMinimal.h"
#include "EPhaseTransitionType.h"
#include "ETransitionTargetPhase.h"
#include "QuestConditionType.h"
#include "QuestConditionPhaseTransition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODQUEST_API UQuestConditionPhaseTransition : public UQuestConditionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhaseTransitionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransitionTargetPhase TargetPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerWhenSkippingEntirePhase;
    
    UQuestConditionPhaseTransition();

};

