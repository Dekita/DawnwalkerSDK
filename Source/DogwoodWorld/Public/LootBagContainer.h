#pragma once
#include "CoreMinimal.h"
#include "LootContainerBase.h"
#include "LootBagContainer.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ALootBagContainer : public ALootContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    ALootBagContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnLootBagContentsChanged();
    
};

