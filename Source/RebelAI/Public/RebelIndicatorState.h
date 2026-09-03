#pragma once
#include "CoreMinimal.h"
#include "ERebelIndicatorIconType.h"
#include "RebelIndicatorState.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelIndicatorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelIndicatorIconType IconType;
    
    FRebelIndicatorState();
};

