#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.h"
#include "EItemType.h"
#include "Engine/DataTable.h"
#include "ItemFilterTypeRow.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FItemFilterTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FilterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> FilterIconSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EItemType> FilteredItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EEquipmentSlotType> FilteredEquipmentSlotTypes;
    
    DOGWOODUI_API FItemFilterTypeRow();
};

