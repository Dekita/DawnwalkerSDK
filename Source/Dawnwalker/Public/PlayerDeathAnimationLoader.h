#pragma once
#include "CoreMinimal.h"
#include "EWeaponSwingDirection.h"
#include "Engine/DataAsset.h"
#include "PlayerDeathAnimationLoader.generated.h"

class UAnimSequenceBase;
class URandomAnimationLoader;

UCLASS(Blueprintable)
class DAWNWALKER_API UPlayerDeathAnimationLoader : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URandomAnimationLoader* HumanSwordDeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URandomAnimationLoader* VampireSwordDeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSwingDirection, TSoftObjectPtr<UAnimSequenceBase>> VampireClawDeathAnimationsRegularPtrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* FallbackAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSwingDirection, TSoftObjectPtr<UAnimSequenceBase>> VampireClawDeathAnimationsHeavyPtrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSwingDirection, UAnimSequenceBase*> VampireClawDeathAnimationsRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSwingDirection, UAnimSequenceBase*> VampireClawDeathAnimationsHeavy;
    
public:
    UPlayerDeathAnimationLoader();

};

