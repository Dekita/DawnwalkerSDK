#pragma once
#include "CoreMinimal.h"
#include "EQuestTimeProgressionType.h"
#include "ProgressTimeSpecialChoiceBase.h"
#include "ProgressTimeRelativeSpecialChoice.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UProgressTimeRelativeSpecialChoice : public UProgressTimeSpecialChoiceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestTimeProgressionType TimeProgressionType;
    
    UProgressTimeRelativeSpecialChoice();

};

