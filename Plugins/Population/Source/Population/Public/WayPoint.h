#pragma once
#include "CoreMinimal.h"
#include "CommunityObject.h"
#include "CommunityObjectUsableInterface.h"
#include "WayPoint.generated.h"

UCLASS(Blueprintable)
class POPULATION_API AWayPoint : public ACommunityObject, public ICommunityObjectUsableInterface {
    GENERATED_BODY()
public:
    AWayPoint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

