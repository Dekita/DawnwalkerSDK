#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttackTagToAnimSpeedMap.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FAttackTagToAnimSpeedMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> TagToAnimSpeed;
    
    FAttackTagToAnimSpeedMap();
};

