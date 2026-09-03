#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerStaticLookAtTarget.h"
#include "DawnwalkerRandomLookAtTarget.generated.h"

class UDawnwalkerRandomLookAtConfig;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerRandomLookAtTarget : public FDawnwalkerStaticLookAtTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerRandomLookAtConfig* RandomLookAtConfig;
    
    FDawnwalkerRandomLookAtTarget();
};

