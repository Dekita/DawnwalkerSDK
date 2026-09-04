#pragma once
#include "CoreMinimal.h"
#include "CommunityObject.h"
#include "CommunityBasePoint.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API ACommunityBasePoint : public ACommunityObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PopulationAreaHash;
    
    ACommunityBasePoint(const FObjectInitializer& ObjectInitializer);

};

