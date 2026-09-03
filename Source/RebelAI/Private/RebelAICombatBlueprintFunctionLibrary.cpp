#include "RebelAICombatBlueprintFunctionLibrary.h"

URebelAICombatBlueprintFunctionLibrary::URebelAICombatBlueprintFunctionLibrary() {
}

void URebelAICombatBlueprintFunctionLibrary::StopCombatBehaviors(URebelAIStub* AIStub, bool bShouldSwitchToIdlePhase, bool bShouldRestorePreCombatAttitudeToInstigator) {
}

bool URebelAICombatBlueprintFunctionLibrary::StartCombatBehaviors(URebelAIStub* AIStub) {
    return false;
}

void URebelAICombatBlueprintFunctionLibrary::SetCombatInstigator(URebelAIStub* AIStub, URebelAIStub* Instigator) {
}

void URebelAICombatBlueprintFunctionLibrary::BP_SetPreferredOrbitAngle(const URebelAIStub* AIStub, const float NewAngle) {
}

void URebelAICombatBlueprintFunctionLibrary::BP_SetPreferredLocation(const URebelAIStub* AIStub, const FVector& Location) {
}

void URebelAICombatBlueprintFunctionLibrary::BP_SetDestinationLocationOnOrbit(const URebelAIStub* AIStub, const FVector& Location) {
}

void URebelAICombatBlueprintFunctionLibrary::BP_SetBlockingDirection(const URebelAIStub* AIStub, const FGameplayTag& Direction) {
}

void URebelAICombatBlueprintFunctionLibrary::BP_ReadyForFinisher(const URebelAIStub* AIStub, bool bEnable) {
}

bool URebelAICombatBlueprintFunctionLibrary::BP_IsWeaponEquipped(const URebelAIStub* AIStub) {
    return false;
}

bool URebelAICombatBlueprintFunctionLibrary::BP_IsValueInFloatRange(float Value, const FFloatRange& Range) {
    return false;
}

bool URebelAICombatBlueprintFunctionLibrary::BP_IsAttackSelected(const URebelAIStub* AIStub) {
    return false;
}

void URebelAICombatBlueprintFunctionLibrary::BP_EnableGuardAnimation(const URebelAIStub* AIStub, bool bEnable) {
}


