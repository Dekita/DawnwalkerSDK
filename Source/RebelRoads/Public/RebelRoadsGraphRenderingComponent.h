#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RebelRoadsGraphRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADS_API URebelRoadsGraphRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URebelRoadsGraphRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

