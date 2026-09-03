#include "ActiveAbilityGenericTarget.h"
#include "CharacterBaseAttributeSet.h"
#include "AbilitySystemComponent.h"

AActiveAbilityGenericTarget::AActiveAbilityGenericTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->CharacterAttributeSet = CreateDefaultSubobject<UCharacterBaseAttributeSet>(TEXT("CharacterAttributeSet"));
}

FName AActiveAbilityGenericTarget::GetCreatureType() const {
    return NAME_None;
}


