#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Harvestable.generated.h"

class UHarvestableComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AHarvestable : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHarvestableComponent* HarvestableComponent;
    
    AHarvestable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRegenerated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHarvested();
    
};

