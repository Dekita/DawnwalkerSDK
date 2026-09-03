#pragma once
#include "CoreMinimal.h"
#include "EItemType.h"
#include "ActorReference.h"
#include "QuestNodeActionBase.h"
#include "ETransferDirection.h"
#include "QuestNodeTransferItemsBetweenStorage.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeTransferItemsBetweenStorage : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransferDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransferAllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TargetStorageReference;
    
    UQuestNodeTransferItemsBetweenStorage();

};

