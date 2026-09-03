#pragma once
#include "CoreMinimal.h"
#include "EDayPhase.h"
#include "Engine/DataTable.h"
#include "LoadoutTypeRow.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct DOGWOODUI_API FLoadoutTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDayPhase DayPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LoadoutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuickslotConfigName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> LoadoutIconSprite;
    
    FLoadoutTypeRow();
};

