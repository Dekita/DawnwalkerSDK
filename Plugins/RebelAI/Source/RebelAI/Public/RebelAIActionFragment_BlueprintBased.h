#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIBlueprintReference.h"
#include "RebelAIActionFragment_BlueprintBased.generated.h"

class URebelAIActionFragment_BlueprintBase;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_BlueprintBased : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBlueprintReference BlueprintReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIActionFragment_BlueprintBase* SharedBlueprintInstance;
    
    FRebelAIActionFragment_BlueprintBased();
};

