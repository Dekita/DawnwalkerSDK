#pragma once
#include "CoreMinimal.h"
#include "AmbientOcclusionCasterSettings.h"
#include "SimplygonMaterialCaster.h"
#include "SimplygonAmbientOcclusionCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonAmbientOcclusionCaster : public USimplygonMaterialCaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbientOcclusionCasterSettings AmbientOcclusionCasterSettings;
    
    USimplygonAmbientOcclusionCaster();

};

