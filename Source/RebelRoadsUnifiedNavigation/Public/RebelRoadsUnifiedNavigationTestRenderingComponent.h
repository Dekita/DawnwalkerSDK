#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "RebelRoadsUnifiedNavigationTestRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADSUNIFIEDNAVIGATION_API URebelRoadsUnifiedNavigationTestRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    URebelRoadsUnifiedNavigationTestRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

