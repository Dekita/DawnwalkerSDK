#pragma once
#include "CoreMinimal.h"
#include "OpacityCasterSettings.h"
#include "SimplygonMaterialCaster.h"
#include "SimplygonOpacityCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonOpacityCaster : public USimplygonMaterialCaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpacityCasterSettings OpacityCasterSettings;
    
    USimplygonOpacityCaster();

};

