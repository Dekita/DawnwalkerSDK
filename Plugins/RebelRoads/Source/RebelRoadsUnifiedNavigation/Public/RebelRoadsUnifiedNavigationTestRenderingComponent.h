#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "RebelRoadsUnifiedNavigationTestRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URebelRoadsUnifiedNavigationTestRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    URebelRoadsUnifiedNavigationTestRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

