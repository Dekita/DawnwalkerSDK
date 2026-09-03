#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CommunityObjectSlotComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POPULATION_API UCommunityObjectSlotComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCommunityObjectSlotComponent(const FObjectInitializer& ObjectInitializer);

};

