#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerActorLookAtTarget.h"
#include "DawnwalkerPasserbyLookAtTarget.generated.h"

class UDawnwalkerPasserbyLookAtConfig;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerPasserbyLookAtTarget : public FDawnwalkerActorLookAtTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerPasserbyLookAtConfig* PasserbyLookAtConfig;
    
    FDawnwalkerPasserbyLookAtTarget();
};

