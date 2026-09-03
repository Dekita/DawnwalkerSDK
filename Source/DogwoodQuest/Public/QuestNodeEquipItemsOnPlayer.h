#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.h"
#include "QuestNodeActionBase.h"
#include "EEquipItemMode.h"
#include "QuestNodeEquipItemsOnPlayer.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeEquipItemsOnPlayer : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipItemMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlotType, UItemBaseDataAsset*> EquipItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkItemsAsNew;
    
    UQuestNodeEquipItemsOnPlayer();

};

