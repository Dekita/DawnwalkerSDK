#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DashMontageData.h"
#include "DashConfig.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FDashConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDashMontageData> RandomMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DesiredVectorFromTargetFrontAfterDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontFollowPlayerCameraDuringDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePlayerRotationTowardsCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDelayBeforeReenablingPlayerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepOrientationToTarget;
    
    FDashConfig();
};

