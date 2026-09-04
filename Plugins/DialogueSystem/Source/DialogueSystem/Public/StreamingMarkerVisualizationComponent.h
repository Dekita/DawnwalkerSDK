#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StreamingMarkerVisualizationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOGUESYSTEM_API UStreamingMarkerVisualizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UStreamingMarkerVisualizationComponent(const FObjectInitializer& ObjectInitializer);

};

