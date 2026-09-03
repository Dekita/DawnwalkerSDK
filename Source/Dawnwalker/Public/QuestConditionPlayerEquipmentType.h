#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.h"
#include "QuestConditionType.h"
#include "EEquipmentConditionType.h"
#include "QuestConditionPlayerEquipmentType.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionPlayerEquipmentType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentConditionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlotType, UItemBaseDataAsset*> Slots;
    
public:
    UQuestConditionPlayerEquipmentType();

};

