#pragma once
#include "CoreMinimal.h"
#include "DogwoodAbilitySystemComponent.h"
#include "DawnwalkerAbilitySystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UDawnwalkerAbilitySystemComponent : public UDogwoodAbilitySystemComponent {
    GENERATED_BODY()
public:
    UDawnwalkerAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

};

