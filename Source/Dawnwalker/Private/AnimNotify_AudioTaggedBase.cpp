#include "AnimNotify_AudioTaggedBase.h"

UAnimNotify_AudioTaggedBase::UAnimNotify_AudioTaggedBase() {
}

void UAnimNotify_AudioTaggedBase::SetIsVocalized(const bool bValue) const {
}

FAudioCharacterAnimTagEntry UAnimNotify_AudioTaggedBase::Preview_GetRelatedTaggedData(FGameplayTag AnimNotifyTag, bool IsMainCharacter, TSoftClassPtr<UCommunityNPCDefinitionBase> NPCDefinition) const {
    return FAudioCharacterAnimTagEntry{};
}

TSoftClassPtr<UCommunityNPCDefinitionBase> UAnimNotify_AudioTaggedBase::Preview_GetNpcDefinition() {
    return NULL;
}

bool UAnimNotify_AudioTaggedBase::Preview_GetIsMainCharacter() {
    return false;
}

void UAnimNotify_AudioTaggedBase::OverrideAnimationAudioTag(FGameplayTag AnimationAudioTagOverride) const {
}

FAudioCharacterAnimTagEntry UAnimNotify_AudioTaggedBase::GetRelatedTaggedData(FGameplayTag AnimNotifyTag, USkeletalMeshComponent* MeshComp) const {
    return FAudioCharacterAnimTagEntry{};
}

void UAnimNotify_AudioTaggedBase::Debug_PrintAnimTagEntry(USkeletalMeshComponent* MeshComp, FAudioCharacterAnimTagEntry Entry) const {
}


