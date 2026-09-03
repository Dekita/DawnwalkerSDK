#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DogwoodPassage.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "EDoorOpenDirection.h"
#include "EDoorOrientation.h"
#include "EDoorState.h"
#include "Door.generated.h"

class AController;
class APawn;
class UBoxComponent;
class UCinematicDialogue;
class UCurveFloat;
class UInteractableComponent;
class UItemBaseDataAsset;
class UNavLinkComponent;
class UPersistencyComponent;
class UPrimitiveComponent;
class UQuestComponent;
class URebelCharacterMovementProfile;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ADoor : public AActor, public IDogwoodPassage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorState DoorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDoorWideOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorOpenDirection DoorOpenDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorCrackAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* UnlockItem;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorOrientation DoorOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractableOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorOpenAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OpenCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CloseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* DoorMovementProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USceneComponent*, FVector> DefaultLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavLinkComponent* NavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ApproachTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OpenTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DoorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LockedObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TraversalAreaTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InvisibleWallForCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* FrontInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* RearInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorWhoOpenedDoor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<APawn>> PawnsWithNavmeshLockDisabledByThisDoor;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<APawn>> CurrentOccupants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> WaitingPawns;
    
public:
    ADoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryUnlock(AController* UnlockingController);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorUnlockingItem(UItemBaseDataAsset* NewUnlockItem);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorState(EDoorState InNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorForcedOpen(bool bInForcedOpen, EDoorOpenDirection InOpenDirection, bool bFromSave);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorCrackAmount(float InAmount);
    
    UFUNCTION(BlueprintCallable)
    void Open(AActor* OpeningActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapEnded(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTraversalAreaEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTraversalAreaBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRearInteractionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFrontInteractionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorOpenFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorClose(bool WasSilentlyClosed);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicStarted(UCinematicDialogue* Dialogue, const bool bWasStateKept);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnApproachTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnApproachTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyDoorStateChanged(EDoorState PreviousState, EDoorState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorUnlocked() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool IsDoorStateOpen(EDoorState InState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDoorState GetDoorState() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseInstantly();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool WasSystemicallyClosed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeUnlockedBy(AController* UnlockingController);
    

    // Fix for true pure virtual functions not being implemented
};

