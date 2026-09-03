#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeActionBase.h"
#include "InventoryOperation.h"
#include "QuestNodeModifyInventory.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeModifyInventory : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryOperation> Operations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TargetActor;
    
    UQuestNodeModifyInventory();

};

