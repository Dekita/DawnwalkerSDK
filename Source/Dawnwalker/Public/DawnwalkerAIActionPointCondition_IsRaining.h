#pragma once
#include "CoreMinimal.h"
#include "ActionPointCondition_Base.h"
#include "DawnwalkerAIActionPointCondition_IsRaining.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIActionPointCondition_IsRaining : public FActionPointCondition_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FDawnwalkerAIActionPointCondition_IsRaining();
};

