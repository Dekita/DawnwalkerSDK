#pragma once
#include "CoreMinimal.h"
#include "ERebelGeomProcessorType.h"
#include "DWTraversalSecondaryMontageInstance.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDWTraversalSecondaryMontageInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelGeomProcessorType TraversalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    FDWTraversalSecondaryMontageInstance();
};

