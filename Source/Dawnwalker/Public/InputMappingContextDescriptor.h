#pragma once
#include "CoreMinimal.h"
#include "InputMappingContextDescriptor.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FInputMappingContextDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    DAWNWALKER_API FInputMappingContextDescriptor();
};

