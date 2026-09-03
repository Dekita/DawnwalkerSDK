#pragma once
#include "CoreMinimal.h"
#include "AttributeTessellationSettings.h"
#include "BillboardCloudSettings.h"
#include "MappingImageSettings.h"
#include "SimplygonPipelineSettings.h"
#include "BillboardCloudVegetationPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FBillboardCloudVegetationPipelineSettings : public FSimplygonPipelineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBillboardCloudSettings BillboardCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeTessellationSettings AttributeTessellationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMappingImageSettings MappingImageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;
    
    FBillboardCloudVegetationPipelineSettings();
};

