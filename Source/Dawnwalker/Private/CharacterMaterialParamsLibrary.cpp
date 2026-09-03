#include "CharacterMaterialParamsLibrary.h"

UCharacterMaterialParamsLibrary::UCharacterMaterialParamsLibrary() {
}

void UCharacterMaterialParamsLibrary::RequestCharacterMaterialParamValue(const UObject* InRequester, ACharacter* InCharacter, const ECharacterMaterialParamType InMaterialParam, const float InValue, const float InIncreaseDuration, const bool bIncreaseOnly) {
}

void UCharacterMaterialParamsLibrary::ReleaseCharacterMaterialParamValue(const UObject* InRequester, ACharacter* InCharacter, const ECharacterMaterialParamType InMaterialParam) {
}

void UCharacterMaterialParamsLibrary::IncreaseCharacterMaterialParamValue(ACharacter* InCharacter, const ECharacterMaterialParamType InMaterialParam, const float InValue) {
}

void UCharacterMaterialParamsLibrary::ForceClearCharacterMaterialParam(ACharacter* InCharacter, const ECharacterMaterialParamType InMaterialParam) {
}

UCharacterMaterialParamsComponent* UCharacterMaterialParamsLibrary::FindOrAddMaterialParamsComponent(ACharacter* InCharacter) {
    return NULL;
}

UCharacterMaterialParamsComponent* UCharacterMaterialParamsLibrary::FindMaterialParamsComponent(const ACharacter* InCharacter) {
    return NULL;
}


