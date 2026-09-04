#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "RebelHorseMovementConfig.generated.h"

UCLASS(Blueprintable)
class REBELHORSE_API URebelHorseMovementConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MinTurnRadiusToSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MaxRequestedTurnAngleToSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MaxTurningSpeedToSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurningSpeedSmoothingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurningSpeedSmoothingRate;
    
    URebelHorseMovementConfig();

};

