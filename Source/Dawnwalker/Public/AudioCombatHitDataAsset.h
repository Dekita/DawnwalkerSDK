#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "TwoEventsData.h"
#include "WeaponToBodyTypeKey.h"
#include "WeaponToWeaponKey.h"
#include "AudioCombatHitDataAsset.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioCombatHitDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FWeaponToBodyTypeKey, FTwoEventsData> NPCWasHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultNpcBodyTag;
    
    UAudioCombatHitDataAsset();

};

