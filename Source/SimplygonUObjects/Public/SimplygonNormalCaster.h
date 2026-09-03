#pragma once
#include "CoreMinimal.h"
#include "NormalCasterSettings.h"
#include "SimplygonMaterialCaster.h"
#include "SimplygonNormalCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonNormalCaster : public USimplygonMaterialCaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNormalCasterSettings NormalCasterSettings;
    
    USimplygonNormalCaster();

};

