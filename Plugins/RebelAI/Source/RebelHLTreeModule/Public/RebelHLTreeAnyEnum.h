#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeAnyEnum.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeAnyEnum {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
    FRebelHLTreeAnyEnum();
};

