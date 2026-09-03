#pragma once
#include "CoreMinimal.h"
#include "DogwoodControlsLegendEntry.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FDogwoodControlsLegendEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FDogwoodControlsLegendEntry();
};

