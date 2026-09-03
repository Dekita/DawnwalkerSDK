#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomAttributeModifier.h"
#include "EffectDurationData.h"
#include "Templates/SubclassOf.h"
#include "DogwoodStatsBlueprintFunctionLibrary.generated.h"

class UAbilitySystemComponent;
class UGameplayEffect;

UCLASS(Blueprintable)
class DOGWOODSTATS_API UDogwoodStatsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDogwoodStatsBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEffectDurationData GetEffectDuration(UAbilitySystemComponent* AbilitySystemComponent, const TSubclassOf<UGameplayEffect>& GameplayEffectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CollectGameplayEffectParameters(UAbilitySystemComponent* AbilitySystemComponent, const TSubclassOf<UGameplayEffect>& GameplayEffectClass, TArray<FCustomAttributeModifier>& OutArray, float DefaultSetbyCaller);
    
};

