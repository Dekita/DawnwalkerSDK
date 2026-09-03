#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "EEquipmentSlotType.h"
#include "EItemType.h"
#include "QuestConditionType.h"
#include "EInventoryPauseExpectedResultType.h"
#include "EInventoryPauseType.h"
#include "QuestConditionInventoryType.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionInventoryType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryPauseType PauseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryPauseExpectedResultType ExpectedResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemBaseDataAsset*, int32> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, int32> Currencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UItemBaseDataAsset*> ItemSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EEquipmentSlotType> ItemSlotTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EItemType> ItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAny;
    
public:
    UQuestConditionInventoryType();

};

