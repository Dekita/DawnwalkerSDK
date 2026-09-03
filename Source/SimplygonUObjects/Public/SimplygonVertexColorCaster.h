#pragma once
#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "VertexColorCasterSettings.h"
#include "SimplygonVertexColorCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonVertexColorCaster : public USimplygonMaterialCaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexColorCasterSettings VertexColorCasterSettings;
    
    USimplygonVertexColorCaster();

};

