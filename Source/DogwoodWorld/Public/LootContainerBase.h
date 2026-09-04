#pragma once
#include "CoreMinimal.h"
#include "InventoryLevelProvider.h"
#include "GameFramework/Actor.h"
#include "StealableVolumeAffectable.h"
#include "StealableVolumeAffection.h"
#include "LootContainerBase.generated.h"

class UAkAudioEvent;
class UDWActivatableWidget;
class UInteractableComponent;
class UInventoryComponent;
class UItemBaseDataAsset;
class UNiagaraComponent;
class UNiagaraSystem;
class UPersistencyComponent;

UCLASS(Abstract, Blueprintable)
class DOGWOODWORLD_API ALootContainerBase : public AActor, public IInventoryLevelProvider, public IStealableVolumeAffectable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStealable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowExtraPoliceSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStealableVolumeAffection StealableVolumeAffection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* UnlockItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LoadedNecrospeakVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedNecrospeakVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LoadedQuestItemVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedQuestItemVFX;
    
public:
    ALootContainerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLootWidgetCreated(UDWActivatableWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryReady();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryContentsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredFocus();
    

    // Fix for true pure virtual functions not being implemented
};

