#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "DogwoodAITypeMapping.generated.h"

UCLASS(Blueprintable)
class DOGWOODAI_API UDogwoodAITypeMapping : public UObject {
    GENERATED_BODY()
public:
    UDogwoodAITypeMapping();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_GenericDirectionTagToCombatActionDirectionTag(const FGameplayTag& Value, FGameplayTag& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_GenericAttackStrengthTagToCombatAttackStrengthTag(const FGameplayTag& Value, FGameplayTag& OutValue);
    
};

