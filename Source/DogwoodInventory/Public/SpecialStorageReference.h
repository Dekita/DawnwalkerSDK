#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESpecialInventoryType.h"
#include "SpecialStorageReference.generated.h"

class UInventoryComponent;
class UPersistencyComponent;

UCLASS(Abstract, Blueprintable)
class DOGWOODINVENTORY_API ASpecialStorageReference : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialInventoryType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    ASpecialStorageReference(const FObjectInitializer& ObjectInitializer);

};

