#include "DogwoodAICombatBlueprintFunctionLibrary.h"

UDogwoodAICombatBlueprintFunctionLibrary::UDogwoodAICombatBlueprintFunctionLibrary() {
}

FGameplayTag UDogwoodAICombatBlueprintFunctionLibrary::Temp_BP_GetCombatPose(const URebelAIStub* AIStub) {
    return FGameplayTag{};
}

FGameplayTag UDogwoodAICombatBlueprintFunctionLibrary::GetRandomAttackDirection() {
    return FGameplayTag{};
}

URebelAIStub* UDogwoodAICombatBlueprintFunctionLibrary::GetNextIncomingAttacker(URebelAIStub* AIStub, bool& bIsHitIncoming, float& TimeToHitWindow) {
    return NULL;
}

FGameplayTag UDogwoodAICombatBlueprintFunctionLibrary::GetMirrorAttackDirection(const FGameplayTag Tag) {
    return FGameplayTag{};
}

float UDogwoodAICombatBlueprintFunctionLibrary::GetBlendTimesBasedOnTags(TSoftObjectPtr<UDataTable> CustomBlendTimes, FGameplayTag ActionTag, FGameplayTag InterrruptedActionTag, UObject* WorldContextObject) {
    return 0.0f;
}

void UDogwoodAICombatBlueprintFunctionLibrary::ForceGuardSuccess(URebelAIStub* AIStub) {
}

void UDogwoodAICombatBlueprintFunctionLibrary::ChangeGuardDirection(URebelAIStub* AIStub, const FGameplayTag& DirectionTag) {
}


