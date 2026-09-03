#include "CharacterMaterialParamsComponent.h"

UCharacterMaterialParamsComponent::UCharacterMaterialParamsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Config = NULL;
}

void UCharacterMaterialParamsComponent::RequestParamValue(const UObject* InRequester, const ECharacterMaterialParamType MaterialParam, const FCharacterMaterialRequestData InRequestParams, const bool bIncreaseOnly) {
}

void UCharacterMaterialParamsComponent::ReleaseParamValue(const UObject* InRequester, const ECharacterMaterialParamType MaterialParam) {
}

void UCharacterMaterialParamsComponent::OnCinematicDialogueStarted() {
}

void UCharacterMaterialParamsComponent::IncreaseParamToValue(const ECharacterMaterialParamType MaterialParam, const float InValue) {
}

void UCharacterMaterialParamsComponent::ForceClearParam(const ECharacterMaterialParamType MaterialParam) {
}


