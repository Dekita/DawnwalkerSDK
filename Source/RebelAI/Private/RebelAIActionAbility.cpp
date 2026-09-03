#include "RebelAIActionAbility.h"

URebelAIActionAbility::URebelAIActionAbility() {
    this->bUnbreakableDuringCinematics = false;
}

URebelAIStub* URebelAIActionAbility::GetTarget() const {
    return NULL;
}

USkeletalMeshComponent* URebelAIActionAbility::GetSkeletalMesh() const {
    return NULL;
}

UCommunityNPCDefinitionBase* URebelAIActionAbility::GetNPCDefinition() const {
    return NULL;
}

FGameplayTag URebelAIActionAbility::GetCharacterPose() const {
    return FGameplayTag{};
}

URebelAIStub* URebelAIActionAbility::GetAIStub() const {
    return NULL;
}

URebelAIDef* URebelAIActionAbility::GetAIDefinition() const {
    return NULL;
}


