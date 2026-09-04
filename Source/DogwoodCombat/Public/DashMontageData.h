#pragma once
#include "CoreMinimal.h"
#include "DashMontageData.generated.h"

class UAnimMontage;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FDashMontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DashMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DashCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DashFrameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DashFrameEnd;
    
    DOGWOODCOMBAT_API FDashMontageData();
};

