#pragma once
#include "CoreMinimal.h"
#include "DogwoodControlsLegendEntry.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FDogwoodControlsLegendEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    DOGWOODSYSTEM_API FDogwoodControlsLegendEntry();
};

