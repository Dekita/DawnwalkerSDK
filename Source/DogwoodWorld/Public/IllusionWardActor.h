#pragma once
#include "CoreMinimal.h"
#include "WardActor.h"
#include "IllusionWardActor.generated.h"

class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AIllusionWardActor : public AWardActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ActiveWardParticleComponent;
    
    AIllusionWardActor(const FObjectInitializer& ObjectInitializer);

};

