#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "GameplayEffectSpec.h"
#include "CharacterBuffCustomTimeProvider.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCharacterBuffCustomTimeProvider : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UCharacterBuffCustomTimeProvider();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalDuration(const FGameplayEffectSpec& EffectSpec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining(const FGameplayEffectSpec& EffectSpec) const;
    
};

