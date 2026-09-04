#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RebelNavigationSplineDebugComponent.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELNAVIGATION_API URebelNavigationSplineDebugComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URebelNavigationSplineDebugComponent(const FObjectInitializer& ObjectInitializer);

};

