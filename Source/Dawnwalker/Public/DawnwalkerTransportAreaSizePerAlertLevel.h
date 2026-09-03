#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerTransportAreaSizePerAlertLevel.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTransportAreaSizePerAlertLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighAlertLevel;
    
    FDawnwalkerTransportAreaSizePerAlertLevel();
};

