#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "ItemPaymentSpecialChoicePayload.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODDIALOGUE_API FItemPaymentSpecialChoicePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FItemHandle, int32> RemovedItems;
    
    FItemPaymentSpecialChoicePayload();
};

