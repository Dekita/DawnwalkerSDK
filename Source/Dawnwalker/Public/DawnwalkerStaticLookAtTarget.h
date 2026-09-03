#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DawnwalkerLookAtTarget.h"
#include "DawnwalkerStaticLookAtTarget.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerStaticLookAtTarget : public FDawnwalkerLookAtTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FDawnwalkerStaticLookAtTarget();
};

