#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIProcessedSituation.generated.h"

class URebelAISituationProcessor;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIProcessedSituation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelAISituationProcessor* Processor;
    
    FRebelAIProcessedSituation();
};

