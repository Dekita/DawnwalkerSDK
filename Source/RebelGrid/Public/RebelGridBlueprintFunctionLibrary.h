#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RebelGridBlueprintFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class REBELGRID_API URebelGridBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelGridBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetActorsFromGridInRadius(const UObject* WorldContextObject, FName GridName, const FVector& position, float Radius, UClass* ActorClassFilter, TArray<AActor*>& OutActors);
    
};

