#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChartAggregatorSettings.h"
#include "MaterialOutputSettings.h"
#include "SimplygonStandinPipeline.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class STANDINACTOR_API USimplygonStandinPipeline : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChartAggregatorSettings ChartAggregatorSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialOutputSettings MaterialOutputSettings;
    
    USimplygonStandinPipeline();

};

