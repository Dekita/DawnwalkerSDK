#pragma once
#include "CoreMinimal.h"
#include "CommunityObjectSlotComponent.h"
#include "WaypointSlotComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POPULATION_API UWaypointSlotComponent : public UCommunityObjectSlotComponent {
    GENERATED_BODY()
public:
    UWaypointSlotComponent(const FObjectInitializer& ObjectInitializer);

};

