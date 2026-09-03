#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovieSetVisualizationComponent.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, Within=DialogueMovieSet, meta=(BlueprintSpawnableComponent))
class DIALOGUESYSTEM_API UMovieSetVisualizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMovieSetVisualizationComponent(const FObjectInitializer& ObjectInitializer);

};

