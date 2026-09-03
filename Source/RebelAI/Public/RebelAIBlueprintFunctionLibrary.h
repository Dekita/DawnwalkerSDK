#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayAttribute.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RebelAIEvent.h"
#include "RebelAINodeReference.h"
#include "RebelAIBlueprintFunctionLibrary.generated.h"

class AActor;
class APawn;
class UAnimMontage;
class URWAudioComponent;
class URebelAIStub;
class USplineComponent;

UCLASS(Blueprintable)
class REBELAI_API URebelAIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelAIBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ReportEvent(const FRebelAIEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySoundByTagForRWAudio(AActor* Actor, URWAudioComponent* RWAudio, FGameplayTag SoundTag);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySoundByTagForActor(AActor* Actor, FGameplayTag SoundTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTicketCandidatesInFront(TArray<URebelAIStub*>& OutArray, URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTicketCandidates(TArray<URebelAIStub*>& OutArray, URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTagQueryDescription(const FGameplayTagQuery& Query);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelAIStub* GetRecentHitEnemy(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMovementTargetAlongSpline(APawn* InActor, USplineComponent* InFollowedSpline, UPARAM(Ref) float& OutGoalDistance, bool bMoveBackwards, float SplineSpacingOffset, float GoalRadius, float CurrentSplinePosition, bool bIgnoreNavmesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMontageRateScale(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetLinkedAliasName(const FRebelAINodeReference& NodeReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameTimeSecondsFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameplayAttributeName(const FGameplayAttribute& Attribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelAIStub* GetFirstTicketHolder(URebelAIStub* TicketBoardOwner, FGameplayTag TicketType);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceToSplineForPawn(APawn* InActor, USplineComponent* InFollowedSpline);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceAlongSplineForPawn(APawn* InActor, USplineComponent* InFollowedSpline, bool bMoveBackwards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelAIStub* GetAIStub(const APawn* Pawn);
    
};

