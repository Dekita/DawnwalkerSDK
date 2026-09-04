#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelGenericTreeStateHandle.h"
#include "RebelGenericTreeStateGuidToHandle.generated.h"

USTRUCT(BlueprintType)
struct REBELGENERICTREEMODULE_API FRebelGenericTreeStateGuidToHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGenericTreeStateHandle Handle;
    
    FRebelGenericTreeStateGuidToHandle();
};

