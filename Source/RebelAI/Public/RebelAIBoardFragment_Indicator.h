#pragma once
#include "CoreMinimal.h"
#include "RebelAIBoardFragment.h"
#include "RebelAIIndicatorIconTypeChangedDelegate.h"
#include "RebelAIBoardFragment_Indicator.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIBoardFragment_Indicator : public FRebelAIBoardFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIIndicatorIconTypeChanged OnIndicatorIconTypeChanged;
    
    FRebelAIBoardFragment_Indicator();
};

