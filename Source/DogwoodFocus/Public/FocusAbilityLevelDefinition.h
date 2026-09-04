#pragma once
#include "CoreMinimal.h"
#include "ECombatFocusTargetingType.h"
#include "FocusAbilityGameplayEffect.h"
#include "FocusAbilityLevelDefinition.generated.h"

USTRUCT(BlueprintType)
struct FFocusAbilityLevelDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocusAbilityGameplayEffect> FocusAbilityGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombatFocusTargetingType TargetingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FunctionalDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityBaseDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FocusChargeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercentageCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoERadius;
    
    DOGWOODFOCUS_API FFocusAbilityLevelDefinition();
};

