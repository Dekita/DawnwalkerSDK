#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "EVisibilityType.h"
#include "ForcedPawnVisibilityVolume.generated.h"

UCLASS(Blueprintable)
class POPULATION_API AForcedPawnVisibilityVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisibilityType WhenPlayerIsOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisibilityType WhenPlayerIsInside;
    
public:
    AForcedPawnVisibilityVolume(const FObjectInitializer& ObjectInitializer);

};

