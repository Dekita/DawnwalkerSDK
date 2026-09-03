#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeClearInventory.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeClearInventory : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TargetInventoryReference;
    
public:
    UQuestNodeClearInventory();

};

