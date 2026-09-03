#pragma once
#include "CoreMinimal.h"
#include "RebelAIAggressionSettings.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIAggressionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAggressionController;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxPathLengthToOpponent;
    
    FRebelAIAggressionSettings();
};

