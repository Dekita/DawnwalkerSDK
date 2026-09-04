#pragma once
#include "CoreMinimal.h"
#include "AIReactionsConfig.h"
#include "CustomReactions.h"
#include "RebelAIHandledSituations.h"
#include "RebelAIStubReactionsConfig.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELAI_API URebelAIStubReactionsConfig : public UAIReactionsConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAIHandledSituations> Reactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomReactions> CustomReactions;
    
public:
    URebelAIStubReactionsConfig();

};

