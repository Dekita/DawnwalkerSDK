#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelSpatialLayerDef.h"
#include "RebelSpatialSystemConfig.generated.h"

UCLASS(Blueprintable)
class REBELSPATIALSYSTEM_API URebelSpatialSystemConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelSpatialLayerDef> Layers;
    
    URebelSpatialSystemConfig();

};

