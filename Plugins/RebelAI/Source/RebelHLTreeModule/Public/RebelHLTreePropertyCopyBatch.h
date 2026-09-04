#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeBindableStructDesc.h"
#include "RebelHLTreePropertyCopyBatch.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyCopyBatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeBindableStructDesc TargetStruct;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BindingsBegin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BindingsEnd;
    
    FRebelHLTreePropertyCopyBatch();
};

