#pragma once
#include "CoreMinimal.h"
#include "DrinkBloodSequenceRowHandle.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODDIALOGUE_API FDrinkBloodSequenceRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FDrinkBloodSequenceRowHandle();
};

