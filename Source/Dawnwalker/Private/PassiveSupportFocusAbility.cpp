#include "PassiveSupportFocusAbility.h"
#include "Templates/SubclassOf.h"

UPassiveSupportFocusAbility::UPassiveSupportFocusAbility() {
    this->AbilityType = EFocusAbilityType::None;
    this->SourceActiveAbility = NULL;
}

EFocusAbilityType UPassiveSupportFocusAbility::GetFocusAbilityType() const {
    return EFocusAbilityType::None;
}

TMap<FString, float> UPassiveSupportFocusAbility::GetCustomPropertiesOfSupportAbility() const {
    return TMap<FString, float>();
}

TMap<FString, float> UPassiveSupportFocusAbility::GetCustomPropertiesOfAbility(const UObject* WorldObject, TSubclassOf<UFocusAbilityBase> SourceAbility) {
    return TMap<FString, float>();
}


