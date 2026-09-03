#include "CombatReactionAnimationSet.h"

UCombatReactionAnimationSet::UCombatReactionAnimationSet() {
    this->StunMontage = NULL;
    this->BlockAnimationSet = NULL;
    this->ParryAnimationSet = NULL;
    this->HitAnimationSet = NULL;
    this->BlockReactionsAnimationSet = NULL;
    this->ParryReactionsAnimationSet = NULL;
}

UAnimMontage* UCombatReactionAnimationSet::GetParryReaction(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData) {
    return NULL;
}

UAnimMontage* UCombatReactionAnimationSet::GetParryAnimation(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData) {
    return NULL;
}

EWeaponSwingDirection UCombatReactionAnimationSet::GetMirroredReaction(EWeaponSwingDirection ActionDirection) {
    return EWeaponSwingDirection::None;
}

UAnimMontage* UCombatReactionAnimationSet::GetHitAnimation(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData) {
    return NULL;
}

UAnimMontage* UCombatReactionAnimationSet::GetBlockReaction(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData) {
    return NULL;
}

UAnimMontage* UCombatReactionAnimationSet::GetBlockAnimation(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData) {
    return NULL;
}


