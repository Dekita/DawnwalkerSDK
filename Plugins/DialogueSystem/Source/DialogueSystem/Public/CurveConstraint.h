#pragma once
#include "CoreMinimal.h"
#include "ECurveConstrainType.h"
#include "CurveConstraint.generated.h"

USTRUCT(BlueprintType)
struct FCurveConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ConstrainingCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurveConstrainType ConstrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstrainValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AffectedCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AffectingValue;
    
    DIALOGUESYSTEM_API FCurveConstraint();
};

