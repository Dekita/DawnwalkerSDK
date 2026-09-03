#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SPCRJointDynamicsMngComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPCRJOINTDYNAMICS_API USPCRJointDynamicsMngComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USPCRJointDynamicsMngComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActors();
    
    UFUNCTION(BlueprintCallable)
    void OnReset();
    
};

