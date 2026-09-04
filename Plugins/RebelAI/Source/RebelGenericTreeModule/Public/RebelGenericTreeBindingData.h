#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelGenericTreeBindingInfo.h"
#include "RebelGenericTreeBindingData.generated.h"

USTRUCT(BlueprintType)
struct REBELGENERICTREEMODULE_API FRebelGenericTreeBindingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Target;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelGenericTreeBindingInfo> Properties;
    
    FRebelGenericTreeBindingData();
};

