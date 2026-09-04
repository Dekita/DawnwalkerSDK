#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeaponToBodyTypeKey.generated.h"

USTRUCT(BlueprintType)
struct FWeaponToBodyTypeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BodyAudioTag;
    
    DAWNWALKER_API FWeaponToBodyTypeKey();
};
FORCEINLINE uint32 GetTypeHash(const FWeaponToBodyTypeKey) { return 0; }

