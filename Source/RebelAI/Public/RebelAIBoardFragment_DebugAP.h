#pragma once
#include "CoreMinimal.h"
#include "RebelAIBoardFragment.h"
#include "RebelAIBoardFragment_DebugAP.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIBoardFragment_DebugAP : public FRebelAIBoardFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> LastUsedAPMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAPTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnteringAP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDuringLeavingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAborted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbortMode;
    
    FRebelAIBoardFragment_DebugAP();
};

