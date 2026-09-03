#pragma once
#include "CoreMinimal.h"
#include "DayTime.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeAddGameTimeWithInterpolation.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAddGameTimeWithInterpolation : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayTime DayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
public:
    UQuestNodeAddGameTimeWithInterpolation();

};

