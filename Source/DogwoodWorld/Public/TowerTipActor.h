#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "ETowerState.h"
#include "Templates/SubclassOf.h"
#include "TowerTipActor.generated.h"

class ACharacter;
class AInvestigationStreamingSourcePoint;
class UBigObjectInvestigationComponent;
class UBoxComponent;
class UGameplayAbility;
class UInteractableComponent;
class UPrimitiveComponent;
class USceneComponent;
class UTimeSystemInterface;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ATowerTipActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CancelAbilitiesWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockAbilitiesWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WarpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBigObjectInvestigationComponent* InvestigationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETowerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> ScoutAbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* ControlledCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InvestigationStreamingInnerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InvestigationStreamingOuterVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AInvestigationStreamingSourcePoint*> SpawnedStreamingSourcePoints;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTimeSystemInterface* TimeSystem;
    
public:
    ATowerTipActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLandedAfterTower();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaveTower();
    
    UFUNCTION(BlueprintCallable)
    void OnInvestigationStreamingOuterVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInvestigationStreamingInnerVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterTower();
    
    UFUNCTION(BlueprintCallable)
    void LeaveTower();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetTowerInteractionPrompt();
    
    UFUNCTION(BlueprintCallable)
    void EnterTower();
    
};

