#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "ERebelFoliageMetadataType.h"
#include "RebelFoliageHierarchicalInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELFOLIAGE_API URebelFoliageHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelFoliageMetadataType MetaDataId;
    
public:
    URebelFoliageHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

