#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_MoveTo.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_MoveTo : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    FRebelAIActionFragment_MoveTo();
};

