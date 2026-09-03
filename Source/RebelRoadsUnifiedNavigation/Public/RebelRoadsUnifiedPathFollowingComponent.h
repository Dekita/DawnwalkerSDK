#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsUnifiedPathFollowingComponentImpl.h"
#include "RebelRoadsUnifiedPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADSUNIFIEDNAVIGATION_API URebelRoadsUnifiedPathFollowingComponent : public URebelRoadsUnifiedPathFollowingComponentImpl {
    GENERATED_BODY()
public:
    URebelRoadsUnifiedPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

