#pragma once
#include "CoreMinimal.h"
#include "ERebelGeomProcessorType.h"
#include "DWTraversalSecondaryMontageInstance.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDWTraversalSecondaryMontageInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelGeomProcessorType TraversalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    DAWNWALKER_API FDWTraversalSecondaryMontageInstance();
};

