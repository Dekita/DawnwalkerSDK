#pragma once
#include "CoreMinimal.h"
#include "RebelAIParamContainerReference.h"
#include "RebelAIBlueprintReference.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIBlueprintReference : public FRebelAIParamContainerReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LinkedContainer;
    
public:
    FRebelAIBlueprintReference();
};

