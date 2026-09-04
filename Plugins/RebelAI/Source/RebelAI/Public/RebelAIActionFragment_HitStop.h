#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_HitStop.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_HitStop : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HitStopTimeline;
    
    FRebelAIActionFragment_HitStop();
};

