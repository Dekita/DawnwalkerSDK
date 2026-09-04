#pragma once
#include "CoreMinimal.h"
#include "RebelFormationGroup_PositionData.generated.h"

USTRUCT(BlueprintType)
struct REBELFORMATION_API FRebelFormationGroup_PositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowPosition;
    
    FRebelFormationGroup_PositionData();
};

