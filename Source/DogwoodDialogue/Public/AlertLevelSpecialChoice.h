#pragma once
#include "CoreMinimal.h"
#include "SpecialDialogueChoice.h"
#include "EAlertStage.h"
#include "EAlertLevelCondition.h"
#include "AlertLevelSpecialChoice.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UAlertLevelSpecialChoice : public USpecialDialogueChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertStage AlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertLevelCondition Condition;
    
public:
    UAlertLevelSpecialChoice();

};

