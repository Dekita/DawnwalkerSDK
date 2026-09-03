#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ActionPointObstacleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class POPULATION_API UActionPointObstacleComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UActionPointObstacleComponent(const FObjectInitializer& ObjectInitializer);

};

