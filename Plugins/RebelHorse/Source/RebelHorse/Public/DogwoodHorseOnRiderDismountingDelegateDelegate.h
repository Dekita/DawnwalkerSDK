#pragma once
#include "CoreMinimal.h"
#include "DogwoodHorseOnRiderDismountingDelegateDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDogwoodHorseOnRiderDismountingDelegate, ACharacter*, Rider);

