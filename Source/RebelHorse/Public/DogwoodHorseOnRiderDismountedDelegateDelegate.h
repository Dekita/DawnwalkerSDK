#pragma once
#include "CoreMinimal.h"
#include "DogwoodHorseOnRiderDismountedDelegateDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDogwoodHorseOnRiderDismountedDelegate, ACharacter*, Rider);

