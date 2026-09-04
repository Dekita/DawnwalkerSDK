#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_FinalizedInclude.generated.h"

class URebelGenericTree;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_FinalizedInclude : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelGenericTree* Tree;
    
    FRebelAIActionFragment_FinalizedInclude();
};

