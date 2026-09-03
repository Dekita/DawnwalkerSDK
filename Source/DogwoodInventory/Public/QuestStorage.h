#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestStorage.generated.h"

class UInventoryComponent;
class UPersistencyComponent;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API AQuestStorage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    AQuestStorage(const FObjectInitializer& ObjectInitializer);

};

