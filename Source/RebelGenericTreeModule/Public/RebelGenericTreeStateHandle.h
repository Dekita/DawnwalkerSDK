#pragma once
#include "CoreMinimal.h"
#include "RebelGenericTreeStateHandle.generated.h"

USTRUCT(BlueprintType)
struct REBELGENERICTREEMODULE_API FRebelGenericTreeStateHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
    FRebelGenericTreeStateHandle();
};

