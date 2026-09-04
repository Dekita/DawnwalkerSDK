#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuickslotBindingInfo.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FQuickslotBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TriggeringInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* TriggeringEnhancedInputAction;
    
    DOGWOODUI_API FQuickslotBindingInfo();
};

