#pragma once
#include "CoreMinimal.h"
#include "ERebelQuality.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "ERebelFoliageMetadataTypeErrantBridge.h"
#include "BiomesHierarchicalInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ERRANTBIOMESRUNTIME_API UBiomesHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultInstanceStartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultInstanceEndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelFoliageMetadataTypeErrantBridge MetadataType_Bridge;
    
    UBiomesHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

