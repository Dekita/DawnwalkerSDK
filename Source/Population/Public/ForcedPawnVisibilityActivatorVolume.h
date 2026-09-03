#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ForcedPawnVisibilityActivatorVolume.generated.h"

class AForcedPawnVisibilityVolume;

UCLASS(Blueprintable)
class POPULATION_API AForcedPawnVisibilityActivatorVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AForcedPawnVisibilityVolume* VolumeToActivate;
    
public:
    AForcedPawnVisibilityActivatorVolume(const FObjectInitializer& ObjectInitializer);

};

