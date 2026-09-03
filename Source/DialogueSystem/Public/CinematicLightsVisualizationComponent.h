#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CinematicLightsVisualizationComponent.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOGUESYSTEM_API UCinematicLightsVisualizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCinematicLightsVisualizationComponent(const FObjectInitializer& ObjectInitializer);

};

