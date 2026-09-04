#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "LoadingProviderInterface.h"
#include "AudioDynamicCacheValue.h"
#include "AudioCacheSubsystem.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
class UAudioCharacterAnimationNotifyDataAsset;
class UAudioCharacterBaseDataAsset;
class UAudioCombatHitDataAsset;
class UAudioWeaponDataAsset;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioCacheSubsystem : public UTickableWorldSubsystem, public ILoadingProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FAudioDynamicCacheValue> DynamicCache;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioCharacterAnimationNotifyDataAsset* CharacterAnimationNotifyDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioCombatHitDataAsset* HitDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioCharacterBaseDataAsset* CharacterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioWeaponDataAsset* WeaponDataAsset;
    
public:
    UAudioCacheSubsystem();


    // Fix for true pure virtual functions not being implemented
};

