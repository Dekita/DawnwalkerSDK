#include "DogwoodStatsBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UDogwoodStatsBlueprintFunctionLibrary::UDogwoodStatsBlueprintFunctionLibrary() {
}

FEffectDurationData UDogwoodStatsBlueprintFunctionLibrary::GetEffectDuration(UAbilitySystemComponent* AbilitySystemComponent, const TSubclassOf<UGameplayEffect>& GameplayEffectClass) {
    return FEffectDurationData{};
}

bool UDogwoodStatsBlueprintFunctionLibrary::CollectGameplayEffectParameters(UAbilitySystemComponent* AbilitySystemComponent, const TSubclassOf<UGameplayEffect>& GameplayEffectClass, TArray<FCustomAttributeModifier>& OutArray, float DefaultSetbyCaller) {
    return false;
}


