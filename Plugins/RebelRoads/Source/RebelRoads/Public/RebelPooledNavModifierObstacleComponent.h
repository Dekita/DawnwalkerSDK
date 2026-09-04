#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "RebelPooledNavModifierObstacleComponent.generated.h"

UCLASS(Blueprintable, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADS_API URebelPooledNavModifierObstacleComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    URebelPooledNavModifierObstacleComponent(const FObjectInitializer& ObjectInitializer);

};

