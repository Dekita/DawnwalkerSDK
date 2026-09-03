#pragma once
#include "CoreMinimal.h"
#include "RebelAINodeHandle.h"
#include "RebelAIParamContainerReference.h"
#include "RebelAINodeReference.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAINodeReference : public FRebelAIParamContainerReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAINodeHandle LinkedContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedAlias;
    
    FRebelAINodeReference();
};

