#pragma once
#include "CoreMinimal.h"
#include "LootContainerBase.h"
#include "MeshLootContainer.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AMeshLootContainer : public ALootContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AMeshLootContainer(const FObjectInitializer& ObjectInitializer);

};

