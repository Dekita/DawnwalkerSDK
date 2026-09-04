#pragma once
#include "CoreMinimal.h"
#include "StatsForLevel.h"
#include "NpcStatsForLevel.generated.h"

USTRUCT(BlueprintType)
struct FNpcStatsForLevel : public FStatsForLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthSegmentCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPerSegment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseUnarmedDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseMeleeDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseMagicDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusResistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagicShieldStaminaDamagePercent;
    
    DOGWOODSTATS_API FNpcStatsForLevel();
};

