#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragmentInstanceData.h"
#include "RebelAIActionFragmentInstanceData_Blueprint.generated.h"

class URebelAIActionFragment_BlueprintBase;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragmentInstanceData_Blueprint : public FRebelAIActionFragmentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelAIActionFragment_BlueprintBase* BlueprintInstance;
    
    FRebelAIActionFragmentInstanceData_Blueprint();
};

