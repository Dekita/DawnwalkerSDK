#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RebelRoadsWayPointRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADS_API URebelRoadsWayPointRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URebelRoadsWayPointRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

