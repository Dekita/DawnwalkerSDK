#pragma once
#include "CoreMinimal.h"
#include "DogwoodPlaySyncedMontagesNotifyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDogwoodPlaySyncedMontagesNotifyDelegate, FName, Notify);

