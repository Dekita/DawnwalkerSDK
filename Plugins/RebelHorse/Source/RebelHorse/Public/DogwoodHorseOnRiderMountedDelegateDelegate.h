#pragma once
#include "CoreMinimal.h"
#include "DogwoodHorseOnRiderMountedDelegateDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDogwoodHorseOnRiderMountedDelegate, ACharacter*, Rider);

