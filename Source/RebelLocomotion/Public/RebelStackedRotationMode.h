#pragma once
#include "CoreMinimal.h"
#include "ERebelRotationMode.h"
#include "RebelStackedRotationMode.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelStackedRotationMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RotationModeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    FRebelStackedRotationMode();
};

