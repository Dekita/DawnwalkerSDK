#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RebelRoadsSegmentRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADS_API URebelRoadsSegmentRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URebelRoadsSegmentRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

