#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DogwoodAnimBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class DOGWOODANIM_API UDogwoodAnimBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDogwoodAnimBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldBloodBeVisibleInCurrentSKURegion();
    
};

