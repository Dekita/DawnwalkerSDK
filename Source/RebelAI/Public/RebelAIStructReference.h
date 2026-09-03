#pragma once
#include "CoreMinimal.h"
#include "RebelAIParamContainerReference.h"
#include "RebelAIStructReference.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStructReference : public FRebelAIParamContainerReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* LinkedContainer;
    
public:
    FRebelAIStructReference();
};

