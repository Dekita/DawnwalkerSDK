#include "RebelAIFactionsController.h"

URebelAIFactionsController::URebelAIFactionsController() {
    this->FactionMatrix = NULL;
}

void URebelAIFactionsController::SetAttitudeTowardsPlayer(URebelAIStub* AIStub, ERebelAIAttitude InAttitude) {
}

void URebelAIFactionsController::SetAttitudeBetweenFactions(const FGameplayTag& FactionA, const FGameplayTag& FactionB, ERebelAIAttitude AttitudeToSet) {
}

ERebelAIAttitude URebelAIFactionsController::GetAttitudeBetweenStubs(const URebelAIStub* StubA, const URebelAIStub* StubB) const {
    return ERebelAIAttitude::NotSet;
}

ERebelAIAttitude URebelAIFactionsController::GetAttitudeBetweenFactions(const FGameplayTag& FactionA, const FGameplayTag& FactionB) const {
    return ERebelAIAttitude::NotSet;
}

void URebelAIFactionsController::BP_SetAttitude(URebelAIStub* StubA, URebelAIStub* StubB, ERebelAIAttitude InAttitude, bool bKeep) {
}


