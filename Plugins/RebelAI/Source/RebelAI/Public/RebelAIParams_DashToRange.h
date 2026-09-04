#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIParams_DashTo.h"
#include "RebelAIParams_DashToRange.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_DashToRange : public FRebelAIParams_DashTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelativeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcAngle;
    
    FRebelAIParams_DashToRange();
};

