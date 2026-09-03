#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "XboxGamerTag.generated.h"

class UObject;

UCLASS(Blueprintable)
class DAWNWALKER_API UXboxGamerTag : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXboxGamerTag();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetGamerTag(const UObject* WorldContextObject);
    
};

