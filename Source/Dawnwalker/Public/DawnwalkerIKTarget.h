#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DawnwalkerIKTarget.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerIKTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    FDawnwalkerIKTarget();
};

