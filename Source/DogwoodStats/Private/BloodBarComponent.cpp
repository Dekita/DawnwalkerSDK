#include "BloodBarComponent.h"
#include "VampireAttributeSet.h"

UBloodBarComponent::UBloodBarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VampireAttributeSet = CreateDefaultSubobject<UVampireAttributeSet>(TEXT("VampireAttributeSet"));
    this->PawnASC = NULL;
    this->OwningPawn = NULL;
}

void UBloodBarComponent::UnlockBlood() {
}

void UBloodBarComponent::SetBloodPercent(float InBloodPercent) {
}

void UBloodBarComponent::RestorePercentage(float PercentageAmount, bool bIgnorePermDamage) {
}

void UBloodBarComponent::RestoreAmount(float ReplenishAmountLiteral, bool bIgnorePermDamage) {
}

void UBloodBarComponent::OnOwningStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn) {
}

void UBloodBarComponent::LockBlood() {
}

bool UBloodBarComponent::IsFatigued() const {
    return false;
}

void UBloodBarComponent::HealAndReplenishAllSegments() {
}

float UBloodBarComponent::GetSingleSegmentBloodAmount(int32 SegmentIndex) {
    return 0.0f;
}

float UBloodBarComponent::GetSegmentStartBlood(int32 SegmentIndex) const {
    return 0.0f;
}

int32 UBloodBarComponent::GetSegmentIndexForPermDamage(float Damage, float& DamageInSegment) const {
    return 0;
}

int32 UBloodBarComponent::GetSegmentIndexForBloodLevel(float Blood, float& BloodInSegment) const {
    return 0;
}

int32 UBloodBarComponent::GetSegmentIndexForBloodHealthRestoration(float BloodHealthRestoration, float& BloodRestorationInSegment) const {
    return 0;
}

int32 UBloodBarComponent::GetSegmentCount() {
    return 0;
}

float UBloodBarComponent::GetCurrentBloodBarsScaled() const {
    return 0.0f;
}

float UBloodBarComponent::GetBloodPermDamage() const {
    return 0.0f;
}

float UBloodBarComponent::GetBloodBarLength() const {
    return 0.0f;
}

float UBloodBarComponent::GetBlood() const {
    return 0.0f;
}

bool UBloodBarComponent::CanRecoverSegments() {
    return false;
}


