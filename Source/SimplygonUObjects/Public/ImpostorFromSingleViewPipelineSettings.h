#pragma once
#include "CoreMinimal.h"
#include "AttributeTessellationSettings.h"
#include "ImpostorFromSingleViewSettings.h"
#include "MappingImageSettings.h"
#include "SimplygonPipelineSettings.h"
#include "ImpostorFromSingleViewPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FImpostorFromSingleViewPipelineSettings : public FSimplygonPipelineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpostorFromSingleViewSettings ImpostorFromSingleViewSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeTessellationSettings AttributeTessellationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMappingImageSettings MappingImageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;
    
    FImpostorFromSingleViewPipelineSettings();
};

