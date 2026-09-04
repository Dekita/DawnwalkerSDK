#pragma once
#include "CoreMinimal.h"
#include "EUIAudioCategory.h"
#include "QuantityDialogDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FQuantityDialogDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostPerUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAudioCategory PopupContext;
    
    DOGWOODUI_API FQuantityDialogDescriptor();
};

