#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "RebelRoadsUnifiedPathFollowingComponentImpl.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADSUNIFIEDNAVIGATION_API URebelRoadsUnifiedPathFollowingComponentImpl : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    URebelRoadsUnifiedPathFollowingComponentImpl(const FObjectInitializer& ObjectInitializer);

};

