#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelRoadsAvoidanceParams.h"
#include "RebelRoadsMoveTargetConfig.h"
#include "RebelRoadsMovementConfig.h"
#include "RebelRoadsConfig.generated.h"

UCLASS(Blueprintable)
class REBELROADS_API URebelRoadsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRoadsFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWalkSpeedCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelRoadsMoveTargetConfig MoveTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelRoadsMovementConfig Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelRoadsAvoidanceParams AvoidanceParams;
    
    URebelRoadsConfig();

};

