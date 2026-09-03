#pragma once
#include "CoreMinimal.h"
#include "MarkerCurveState.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FMarkerCurveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
    FMarkerCurveState();
};

