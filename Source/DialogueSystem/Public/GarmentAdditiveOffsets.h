#pragma once
#include "CoreMinimal.h"
#include "GarmentAdditiveOffsets.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FGarmentAdditiveOffsets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YOffset;
    
    FGarmentAdditiveOffsets();
};

