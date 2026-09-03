#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsFollowingComponentImpl.h"
#include "RebelRoadsFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADS_API URebelRoadsFollowingComponent : public URebelRoadsFollowingComponentImpl {
    GENERATED_BODY()
public:
    URebelRoadsFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

