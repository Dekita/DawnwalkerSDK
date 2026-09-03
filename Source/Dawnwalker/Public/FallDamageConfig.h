#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FallAnimationSet.h"
#include "Templates/SubclassOf.h"
#include "FallDamageConfig.generated.h"

class UAnimMontage;
class UGameplayEffect;

UCLASS(Blueprintable)
class DAWNWALKER_API UFallDamageConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFallAnimationSet> LandingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathAnimation;
    
    UFallDamageConfig();

};

