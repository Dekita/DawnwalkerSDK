#pragma once
#include "CoreMinimal.h"
#include "AppearanceUnitHandle.generated.h"

USTRUCT(BlueprintType)
struct FAppearanceUnitHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    DOGWOODINVENTORY_API FAppearanceUnitHandle();
};

