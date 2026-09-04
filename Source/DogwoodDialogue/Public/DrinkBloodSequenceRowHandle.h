#pragma once
#include "CoreMinimal.h"
#include "DrinkBloodSequenceRowHandle.generated.h"

USTRUCT(BlueprintType)
struct FDrinkBloodSequenceRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    DOGWOODDIALOGUE_API FDrinkBloodSequenceRowHandle();
};

