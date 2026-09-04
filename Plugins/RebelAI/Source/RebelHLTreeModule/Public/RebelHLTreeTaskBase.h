#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeNodeBase.h"
#include "RebelHLTreeTaskBase.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeTaskBase : public FRebelHLTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTaskEnabled: 1;
    
    FRebelHLTreeTaskBase();
};

