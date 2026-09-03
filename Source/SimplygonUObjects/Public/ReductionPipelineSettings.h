#pragma once
#include "CoreMinimal.h"
#include "AttributeTessellationSettings.h"
#include "BoneSettings.h"
#include "MappingImageSettings.h"
#include "NormalCalculationSettings.h"
#include "PartRemoverSettings.h"
#include "ReductionSettings.h"
#include "RepairSettings.h"
#include "SimplygonPipelineSettings.h"
#include "VertexWeightSettings.h"
#include "VisibilitySettings.h"
#include "ReductionPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FReductionPipelineSettings : public FSimplygonPipelineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReductionSettings ReductionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepairSettings RepairSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNormalCalculationSettings NormalCalculationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilitySettings VisibilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneSettings BoneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexWeightSettings VertexWeightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartRemoverSettings PartRemoverSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeTessellationSettings AttributeTessellationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMappingImageSettings MappingImageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;
    
    FReductionPipelineSettings();
};

