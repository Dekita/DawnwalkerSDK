#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GarmentAdditiveOffsets.h"
#include "GarmentOffsetIdleTypeRow.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FGarmentOffsetIdleTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarmentAdditiveOffsets Offsets;
    
    FGarmentOffsetIdleTypeRow();
};

