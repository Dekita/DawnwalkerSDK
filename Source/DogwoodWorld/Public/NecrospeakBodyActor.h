#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ENecrospeakState.h"
#include "NecrospeakBodyActor.generated.h"

class ANecrospeakLootable;
class UInteractableComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class DOGWOODWORLD_API ADEPRECATED_NecrospeakBodyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ANecrospeakLootable>> Lootables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENecrospeakState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NecrospeakVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedNecrospeakVFX;
    
    ADEPRECATED_NecrospeakBodyActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNecrospeakEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNecrospeakDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractedWith();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredFocus();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateVFX();
    
    UFUNCTION(BlueprintCallable)
    void ActivateVFX();
    
};

