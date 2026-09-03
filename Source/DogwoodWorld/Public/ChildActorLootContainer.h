#pragma once
#include "CoreMinimal.h"
#include "LootContainerBase.h"
#include "ChildActorLootContainer.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AChildActorLootContainer : public ALootContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActorComponent;
    
    AChildActorLootContainer(const FObjectInitializer& ObjectInitializer);

};

