#pragma once
#include "CoreMinimal.h"
#include "OpenWorldFocusAbility.h"
#include "PermanentBuffProvider.h"
#include "NecrospeakAbility.generated.h"

class INecrospeakCharacterInterface;
class UNecrospeakCharacterInterface;
class UAbilitySystemComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UNecrospeakAbility : public UOpenWorldFocusAbility, public IPermanentBuffProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdditionalDescription;
    
    UNecrospeakAbility();

    UFUNCTION(BlueprintCallable)
    void TriggerNecrospeakStart(TScriptInterface<INecrospeakCharacterInterface> InInterface);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    float GetBuffMultiplier(UAbilitySystemComponent* OwnerASC) const override PURE_VIRTUAL(GetBuffMultiplier, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float GetBuffFactCounterAttributeValue(UAbilitySystemComponent* OwnerASC) const override PURE_VIRTUAL(GetBuffFactCounterAttributeValue, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FText GetBuffDescription(UAbilitySystemComponent* OwnerASC) override PURE_VIRTUAL(GetBuffDescription, return FText::GetEmpty(););
    
};

