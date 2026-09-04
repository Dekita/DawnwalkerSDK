#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "MappedRebelInput.generated.h"

USTRUCT(BlueprintType)
struct FMappedRebelInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey GamepadKey;
    
    REBELINPUT_API FMappedRebelInput();
};

