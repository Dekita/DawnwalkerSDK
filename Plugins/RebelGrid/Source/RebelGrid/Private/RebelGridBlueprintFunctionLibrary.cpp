#include "RebelGridBlueprintFunctionLibrary.h"

URebelGridBlueprintFunctionLibrary::URebelGridBlueprintFunctionLibrary() {
}

bool URebelGridBlueprintFunctionLibrary::GetActorsFromGridInRadius(const UObject* WorldContextObject, FName GridName, const FVector& position, float Radius, UClass* ActorClassFilter, TArray<AActor*>& OutActors) {
    return false;
}


