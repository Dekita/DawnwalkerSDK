#pragma once
#include "CoreMinimal.h"
#include "DogwoodHorseOnRiderMountingDelegateDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDogwoodHorseOnRiderMountingDelegate, ACharacter*, Rider);

