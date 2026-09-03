#pragma once
#include "CoreMinimal.h"
#include "DashConfig.h"
#include "MetricsScalingSettings.h"
#include "SlidingConfig.h"
#include "GameplayTagContainer.h"
#include "RebelAIConfig.h"
#include "ERebelGameDifficulty.h"
#include "Templates/SubclassOf.h"
#include "DogwoodAIConfig.generated.h"

class AWeaponBase;
class UDataTable;

UCLASS(Blueprintable)
class DOGWOODAI_API UDogwoodAIConfig : public URebelAIConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> UnarmedCombatWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<AWeaponBase>> UnarmedCombatWeaponOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetricsScalingSettings MetricsScalingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CustomBlendTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlidingConfig SlidingConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGuardAnimationDuringMovement_VLAD_REBELLION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGlobalLevelScalingModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelGameDifficulty, UDataTable*> LevelScalingModifiersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashConfig DashConfig;
    
    UDogwoodAIConfig();

};

