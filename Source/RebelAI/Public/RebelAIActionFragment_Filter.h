#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_Filter.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Filter : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExclude: 1;
    
    FRebelAIActionFragment_Filter();
};

