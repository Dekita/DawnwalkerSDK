#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "RebelNavigationLayerHISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELNAVIGATION_API URebelNavigationLayerHISMComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid LayerId;
    
    URebelNavigationLayerHISMComponent(const FObjectInitializer& ObjectInitializer);

};

