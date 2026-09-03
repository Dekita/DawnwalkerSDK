#include "RebelAIBlueprintFunctionLibrary.h"

URebelAIBlueprintFunctionLibrary::URebelAIBlueprintFunctionLibrary() {
}

void URebelAIBlueprintFunctionLibrary::ReportEvent(const FRebelAIEvent& Event) {
}

void URebelAIBlueprintFunctionLibrary::PlaySoundByTagForRWAudio(AActor* Actor, URWAudioComponent* RWAudio, FGameplayTag SoundTag) {
}

void URebelAIBlueprintFunctionLibrary::PlaySoundByTagForActor(AActor* Actor, FGameplayTag SoundTag) {
}

void URebelAIBlueprintFunctionLibrary::GetTicketCandidatesInFront(TArray<URebelAIStub*>& OutArray, URebelAIStub* Stub) {
}

void URebelAIBlueprintFunctionLibrary::GetTicketCandidates(TArray<URebelAIStub*>& OutArray, URebelAIStub* Stub) {
}

FString URebelAIBlueprintFunctionLibrary::GetTagQueryDescription(const FGameplayTagQuery& Query) {
    return TEXT("");
}

URebelAIStub* URebelAIBlueprintFunctionLibrary::GetRecentHitEnemy(URebelAIStub* Stub) {
    return NULL;
}

FVector URebelAIBlueprintFunctionLibrary::GetMovementTargetAlongSpline(APawn* InActor, USplineComponent* InFollowedSpline, float& OutGoalDistance, bool bMoveBackwards, float SplineSpacingOffset, float GoalRadius, float CurrentSplinePosition, bool bIgnoreNavmesh) {
    return FVector{};
}

float URebelAIBlueprintFunctionLibrary::GetMontageRateScale(UAnimMontage* Montage) {
    return 0.0f;
}

FName URebelAIBlueprintFunctionLibrary::GetLinkedAliasName(const FRebelAINodeReference& NodeReference) {
    return NAME_None;
}

float URebelAIBlueprintFunctionLibrary::GetGameTimeSecondsFromActor(AActor* Actor) {
    return 0.0f;
}

FString URebelAIBlueprintFunctionLibrary::GetGameplayAttributeName(const FGameplayAttribute& Attribute) {
    return TEXT("");
}

URebelAIStub* URebelAIBlueprintFunctionLibrary::GetFirstTicketHolder(URebelAIStub* TicketBoardOwner, FGameplayTag TicketType) {
    return NULL;
}

float URebelAIBlueprintFunctionLibrary::GetDistanceToSplineForPawn(APawn* InActor, USplineComponent* InFollowedSpline) {
    return 0.0f;
}

float URebelAIBlueprintFunctionLibrary::GetDistanceAlongSplineForPawn(APawn* InActor, USplineComponent* InFollowedSpline, bool bMoveBackwards) {
    return 0.0f;
}

URebelAIStub* URebelAIBlueprintFunctionLibrary::GetAIStub(const APawn* Pawn) {
    return NULL;
}


