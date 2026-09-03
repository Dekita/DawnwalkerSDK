#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeaponToBodyTypeKey.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FWeaponToBodyTypeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BodyAudioTag;
    
    FWeaponToBodyTypeKey();
};
FORCEINLINE uint32 GetTypeHash(const FWeaponToBodyTypeKey) { return 0; }

