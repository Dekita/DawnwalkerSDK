#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_OverrideParryWindow.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_OverrideParryWindow : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParryWindowMultiplier;
    
    FRebelAIActionFragment_OverrideParryWindow();
};

