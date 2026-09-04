#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelRoadsSegmentData.generated.h"

USTRUCT(BlueprintType)
struct FRebelRoadsSegmentData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StartNodeIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EndNodeIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LanesStartIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LanesNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SegmentConvexStartIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    REBELROADS_API FRebelRoadsSegmentData();
};

