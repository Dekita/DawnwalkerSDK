#pragma once
#include "CoreMinimal.h"
#include "RebelAIService.h"
#include "DawnwalkerAIService_Indicator.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIService_Indicator : public FRebelAIService {
    GENERATED_BODY()
public:
    FDawnwalkerAIService_Indicator();
};

