#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FullscreenChoiceSlotRow.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FFullscreenChoiceSlotRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    FFullscreenChoiceSlotRow();
};

