#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SilverHighlightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API USilverHighlightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USilverHighlightComponent(const FObjectInitializer& ObjectInitializer);

};

