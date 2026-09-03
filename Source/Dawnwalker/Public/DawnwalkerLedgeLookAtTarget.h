#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DawnwalkerStaticLookAtTarget.h"
#include "DawnwalkerLedgeLookAtTarget.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerLedgeLookAtTarget : public FDawnwalkerStaticLookAtTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LedgeRelativeTransform;
    
    FDawnwalkerLedgeLookAtTarget();
};

