#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeSwapPlayerInventory.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeSwapPlayerInventory : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TargetStorageReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGeneratePlayerInventoryLevelsAfterSwap;
    
    UQuestNodeSwapPlayerInventory();

};

