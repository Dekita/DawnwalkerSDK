#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeStateHandle.h"
#include "RebelHLTreeStateLink.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeStateLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle StateHandle;
    
    FRebelHLTreeStateLink();
};

