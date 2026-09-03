#include "GameplayCueNotify_OneShot.h"

UGameplayCueNotify_OneShot::UGameplayCueNotify_OneShot() {
    this->DefaultBoneForVfxSpawn = TEXT("Root");
    this->OneShotEffect = NULL;
    this->bDetachFromBone = false;
}

TMap<FName, FVector> UGameplayCueNotify_OneShot::GetVectorVariablesToSet_Implementation(const FGameplayCueParameters& Parameters) const {
    return TMap<FName, FVector>();
}

TMap<FName, float> UGameplayCueNotify_OneShot::GetVariablesToSet_Implementation(const FGameplayCueParameters& Parameters) const {
    return TMap<FName, float>();
}

TMap<FName, FLinearColor> UGameplayCueNotify_OneShot::GetColorVariablesToSet_Implementation(const FGameplayCueParameters& Parameters) const {
    return TMap<FName, FLinearColor>();
}


