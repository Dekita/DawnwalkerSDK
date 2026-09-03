#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "EiiInstancedStaticMeshComponent.generated.h"

class AActor;
class UEiiMeshToActorMapping;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ERRANTINSTANCEINTERACTION_API UEiiInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DefaultActorClassToConvertTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEiiMeshToActorMapping* MeshToActorMapping;
    
    UEiiInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

