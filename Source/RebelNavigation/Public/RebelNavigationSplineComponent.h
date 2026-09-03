#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "RebelNavigationSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELNAVIGATION_API URebelNavigationSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    URebelNavigationSplineComponent(const FObjectInitializer& ObjectInitializer);

};

