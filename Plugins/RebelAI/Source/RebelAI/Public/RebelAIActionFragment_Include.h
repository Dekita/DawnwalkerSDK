#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_Include_Data.h"
#include "RebelAIActionFragment_Include.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Include : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIActionFragment_Include_Data IncludeTree;
    
    FRebelAIActionFragment_Include();
};

