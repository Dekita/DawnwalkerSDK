#pragma once
#include "CoreMinimal.h"
#include "ERebelLookAtMode.h"
#include "RebelStackedLookAtMode.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelStackedLookAtMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelLookAtMode LookAtMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LookAtModeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    FRebelStackedLookAtMode();
};

