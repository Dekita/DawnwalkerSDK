#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "DawnwalkerTraversalCondition.h"
#include "DawnwalkerTraversalMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDawnwalkerTraversalMontage : public FDawnwalkerTraversalCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> ExtraData;
    
    DAWNWALKER_API FDawnwalkerTraversalMontage();
};

