#pragma once
#include "CoreMinimal.h"
#include "ComputeCasterSettings.h"
#include "SimplygonMaterialCaster.h"
#include "SimplygonComputeCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonComputeCaster : public USimplygonMaterialCaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputeCasterSettings ComputeCasterSettings;
    
    USimplygonComputeCaster();

};

