#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VampireMutationLevelRow.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FVampireMutationLevelRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelUpRequiredSegments;
    
    FVampireMutationLevelRow();
};

