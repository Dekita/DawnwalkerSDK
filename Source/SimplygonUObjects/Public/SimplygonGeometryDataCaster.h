#pragma once
#include "CoreMinimal.h"
#include "GeometryDataCasterSettings.h"
#include "SimplygonMaterialCaster.h"
#include "SimplygonGeometryDataCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonGeometryDataCaster : public USimplygonMaterialCaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryDataCasterSettings GeometryDataCasterSettings;
    
    USimplygonGeometryDataCaster();

};

