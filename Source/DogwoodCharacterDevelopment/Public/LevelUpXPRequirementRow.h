#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelUpXPRequirementRow.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FLevelUpXPRequirementRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelUpXPRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelUpTraitPointReward;
    
    FLevelUpXPRequirementRow();
};

