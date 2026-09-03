#pragma once
#include "CoreMinimal.h"
#include "ColorCasterSettings.h"
#include "SimplygonMaterialCaster.h"
#include "SimplygonColorCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonColorCaster : public USimplygonMaterialCaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorCasterSettings ColorCasterSettings;
    
    USimplygonColorCaster();

};

