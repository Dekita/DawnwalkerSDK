#pragma once
#include "CoreMinimal.h"
#include "GarmentAdditiveOffsets.generated.h"

USTRUCT(BlueprintType)
struct FGarmentAdditiveOffsets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YOffset;
    
    DIALOGUESYSTEM_API FGarmentAdditiveOffsets();
};

