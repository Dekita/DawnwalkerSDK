#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AudioCharacterCommonBaseComponent.h"
#include "AudioSimpleCharacterBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UAudioSimpleCharacterBaseComponent : public UAudioCharacterCommonBaseComponent {
    GENERATED_BODY()
public:
    UAudioSimpleCharacterBaseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSimpleCharacterDied(FGameplayTag WeaponTag, FGameplayTag WeaponSoundTag);
    
    UFUNCTION(BlueprintCallable)
    void OnSimpleCharacterDamaged(FGameplayTag WeaponTag, FGameplayTag WeaponSoundTag);
    
};

