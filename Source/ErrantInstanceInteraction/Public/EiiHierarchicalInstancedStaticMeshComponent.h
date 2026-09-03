#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "EiiHierarchicalInstancedStaticMeshComponent.generated.h"

class AActor;
class UEiiMeshToActorMapping;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ERRANTINSTANCEINTERACTION_API UEiiHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DefaultActorClassToConvertTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEiiMeshToActorMapping* MeshToActorMapping;
    
    UEiiHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

