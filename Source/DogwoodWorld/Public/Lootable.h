#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lootable.generated.h"

class ULootableComponent;
class UPersistencyComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ALootable : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PersistentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HideableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULootableComponent* LootableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
    ALootable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLootableRegenerated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLootablePickedUp();
    
};

