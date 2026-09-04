#pragma once
#include "CoreMinimal.h"
#include "ERebelIndicatorIconType.h"
#include "RebelIndicatorState.generated.h"

USTRUCT(BlueprintType)
struct FRebelIndicatorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelIndicatorIconType IconType;
    
    REBELAI_API FRebelIndicatorState();
};

