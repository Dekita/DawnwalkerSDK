#include "DawnwalkerCommonCharacterBase.h"
#include "ActorStubComponent.h"
#include "DawnwalkerCharacterMovement.h"
#include "Templates/SubclassOf.h"

ADawnwalkerCommonCharacterBase::ADawnwalkerCommonCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UDawnwalkerCharacterMovement>(TEXT("CharMoveComp"))) {
    this->StubComponent = CreateDefaultSubobject<UActorStubComponent>(TEXT("Stub"));
    this->PawnDefinition = NULL;
    this->DefaultMovementProfile = NULL;
    this->DefaultAnimLayer = NULL;
    this->bUseAstralVFXOnDeath = false;
    this->RebelCharacterMovement = NULL;
    this->InventoryComponent = NULL;
    this->CharacterScale = 1.00f;
    this->SpawnedVFX = NULL;
    this->RagdollTimerRate = 0.10f;
    this->RagdollMinDuration = 2.00f;
    this->RagdollMaxDuration = 10.00f;
    this->RagdollVelocityThreshold = 12.00f;
    this->CachedAnimInstance = NULL;
    this->StubComponent->SetupAttachment(RootComponent);
}

void ADawnwalkerCommonCharacterBase::SetOverrideCharacterMesh(bool bOverride) {
}

void ADawnwalkerCommonCharacterBase::SetLookTargetSocketTag(const FGameplayTag& LookTargetTag) {
}

void ADawnwalkerCommonCharacterBase::SetLookSourceSocketTag(const FGameplayTag& LookSourceTag) {
}

void ADawnwalkerCommonCharacterBase::SetFocusedSocketTag(const FGameplayTag SocketTag) {
}

void ADawnwalkerCommonCharacterBase::SetDefaultLookTargetSocketTag() {
}

void ADawnwalkerCommonCharacterBase::SetDefaultLookSourceSocketTag() {
}

UAnimMontage* ADawnwalkerCommonCharacterBase::SelectMontageFromSet(const URebelLocomotionMontageSet* MontageSet) const {
    return NULL;
}

bool ADawnwalkerCommonCharacterBase::RemoveLookAtTarget(int32 InHandle) {
    return false;
}

int32 ADawnwalkerCommonCharacterBase::PushRotationMode(const ERebelRotationMode InRotationMode, const uint8 InPriority) {
    return 0;
}

int32 ADawnwalkerCommonCharacterBase::PushMovementProfile(const URebelCharacterMovementProfile* InMovementProfile) {
    return 0;
}

int32 ADawnwalkerCommonCharacterBase::PushLinkedAnimLayers(TSubclassOf<UAnimInstance> LinkedAnimLayersClass, const uint8 DefaultPriority, bool bOverrideLinkedAnimLayerPriority) {
    return 0;
}

bool ADawnwalkerCommonCharacterBase::PopRotationMode(int32 InHandle) {
    return false;
}

bool ADawnwalkerCommonCharacterBase::PopMovementProfile(int32 InHandle) {
    return false;
}

bool ADawnwalkerCommonCharacterBase::PopLinkedAnimLayersByHandle(int32 Handle) {
    return false;
}

bool ADawnwalkerCommonCharacterBase::PopLinkedAnimLayers(TSubclassOf<UAnimInstance> LinkedAnimLayersClass) {
    return false;
}

void ADawnwalkerCommonCharacterBase::OnAnimInstanceInitialized() {
}

bool ADawnwalkerCommonCharacterBase::MatchAnyConditionFromSet(const URebelLocomotionConditionSet* ConditionSet, bool bUpdateStateFromAnimData) const {
    return false;
}

bool ADawnwalkerCommonCharacterBase::MatchAllConditionFromSet(const URebelLocomotionConditionSet* ConditionSet) const {
    return false;
}

bool ADawnwalkerCommonCharacterBase::IsVisibleOnScreen() {
    return false;
}

bool ADawnwalkerCommonCharacterBase::IsDrinkable() const {
    return false;
}

UDawnwalkerCharacterMovement* ADawnwalkerCommonCharacterBase::GetRebelCharacterMovement() const {
    return NULL;
}

bool ADawnwalkerCommonCharacterBase::GetOverrideCharacterMesh() const {
    return false;
}

FGameplayTag ADawnwalkerCommonCharacterBase::GetLookTargetSocketTag() const {
    return FGameplayTag{};
}

FVector ADawnwalkerCommonCharacterBase::GetLookTargetLocation() const {
    return FVector{};
}

FGameplayTag ADawnwalkerCommonCharacterBase::GetLookSourceSocketTag() const {
    return FGameplayTag{};
}

FVector ADawnwalkerCommonCharacterBase::GetLookSourceLocation() const {
    return FVector{};
}

bool ADawnwalkerCommonCharacterBase::GetLockToNavMesh() const {
    return false;
}

bool ADawnwalkerCommonCharacterBase::GetIsDrinkableFlag() const {
    return false;
}

EInteractableState ADawnwalkerCommonCharacterBase::GetInteractableState() const {
    return EInteractableState::None;
}

FGameplayTag ADawnwalkerCommonCharacterBase::GetFocusedSocketTag() const {
    return FGameplayTag{};
}

FVector ADawnwalkerCommonCharacterBase::GetFocusedLocation(const AActor* OtherActor) const {
    return FVector{};
}

FName ADawnwalkerCommonCharacterBase::GetCreatureType() const {
    return NAME_None;
}

FVector ADawnwalkerCommonCharacterBase::GetCharacterSocketLocation(const FGameplayTag& SocketTag) const {
    return FVector{};
}

UAudioCharacterCommonBaseComponent* ADawnwalkerCommonCharacterBase::GetAudioCharacterCommonBaseComponent() const {
    return NULL;
}

UAnimInstance* ADawnwalkerCommonCharacterBase::GetAnimInstance() const {
    return NULL;
}

void ADawnwalkerCommonCharacterBase::ClearFocusedSocketTag() {
}

int32 ADawnwalkerCommonCharacterBase::AddLookAtTarget(const FInstancedStruct& LookAtTargetData) {
    return 0;
}

