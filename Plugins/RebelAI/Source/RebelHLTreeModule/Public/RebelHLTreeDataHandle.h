#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeDataSourceType.h"
#include "RebelHLTreeStateHandle.h"
#include "RebelHLTreeDataHandle.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeDataHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeDataSourceType Source;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle StateHandle;
    
public:
    FRebelHLTreeDataHandle();
};

