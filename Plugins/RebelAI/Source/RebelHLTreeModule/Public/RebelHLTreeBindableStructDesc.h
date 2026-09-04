#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeBindableStructSource.h"
#include "RebelHLTreeDataHandle.h"
#include "RebelHLTreeBindableStructDesc.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeBindableStructDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle DataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeBindableStructSource DataSource;
    
    FRebelHLTreeBindableStructDesc();
};

