#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DawnwalkerTraversalExtraData.h"
#include "DawnwalkerTraversalExtraData_WarpTargetTransform.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerTraversalExtraData_WarpTargetTransform : public FDawnwalkerTraversalExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarpTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LedgeRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTestDirectionAsForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWalkableFloor;
    
    DAWNWALKER_API FDawnwalkerTraversalExtraData_WarpTargetTransform();
};

