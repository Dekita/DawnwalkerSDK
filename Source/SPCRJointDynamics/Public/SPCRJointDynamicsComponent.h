#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SPCRJointDynamicsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPCRJOINTDYNAMICS_API USPCRJointDynamicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReset;
    
    USPCRJointDynamicsComponent(const FObjectInitializer& ObjectInitializer);

};

