#pragma once
#include "CoreMinimal.h"
#include "SpecialDialogueChoice.h"
#include "ProgressTimeSpecialChoiceBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODDIALOGUE_API UProgressTimeSpecialChoiceBase : public USpecialDialogueChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayTimeProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayDelayLaterIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTimeInterpolation;
    
public:
    UProgressTimeSpecialChoiceBase();

};

