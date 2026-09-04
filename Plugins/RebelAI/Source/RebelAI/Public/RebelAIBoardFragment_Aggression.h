#pragma once
#include "CoreMinimal.h"
#include "RebelAIBoardFragment.h"
#include "RebelAIBoardFragment_Aggression.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIBoardFragment_Aggression : public FRebelAIBoardFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAggressive;
    
    FRebelAIBoardFragment_Aggression();
};

