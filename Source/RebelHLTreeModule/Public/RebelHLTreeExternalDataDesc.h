#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeExternalDataRequirement.h"
#include "RebelHLTreeExternalDataHandle.h"
#include "RebelHLTreeExternalDataDesc.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeExternalDataDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeExternalDataHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeExternalDataRequirement Requirement;
    
    FRebelHLTreeExternalDataDesc();
};

