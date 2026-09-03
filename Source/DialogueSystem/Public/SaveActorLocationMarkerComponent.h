#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SaveActorLocationMarkerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOGUESYSTEM_API USaveActorLocationMarkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USaveActorLocationMarkerComponent(const FObjectInitializer& ObjectInitializer);

};

