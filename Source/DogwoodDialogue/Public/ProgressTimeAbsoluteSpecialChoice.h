#pragma once
#include "CoreMinimal.h"
#include "EProgressTimeAbsoluteSpecialChoiceHours.h"
#include "ProgressTimeSpecialChoiceBase.h"
#include "ProgressTimeAbsoluteSpecialChoice.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UProgressTimeAbsoluteSpecialChoice : public UProgressTimeSpecialChoiceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressTimeHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressTimeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProgressTimeAbsoluteSpecialChoiceHours HoursToProgressWhenSpecifiedTimeIsAlreadyReached;
    
    UProgressTimeAbsoluteSpecialChoice();

};

