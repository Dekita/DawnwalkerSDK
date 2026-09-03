#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "RebelNavigationTestRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADS_API URebelNavigationTestRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    URebelNavigationTestRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

