#pragma once
#include "CoreMinimal.h"
#include "CharacterAbilityConfig.h"
#include "Templates/SubclassOf.h"
#include "PlayerCharacterAbilityConfig.generated.h"

class UGameplayAbility;
class UGameplayEffect;

UCLASS(Blueprintable)
class DAWNWALKER_API UPlayerCharacterAbilityConfig : public UCharacterAbilityConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayAbility>, int32> DefaultEquippedFocusAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GrantAntiGravEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GrantShadowstepEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GrantClawRideEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GrantFogFormEffect;
    
    UPlayerCharacterAbilityConfig();

};

