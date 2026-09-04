#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PopulationBlueprintFunctionLibrary.generated.h"

class AActor;
class UActorComponent;
class UActorStub;
class UObject;

UCLASS(Blueprintable)
class POPULATION_API UPopulationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPopulationBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsStubVisible(const UObject* WorldContextObject, const UActorStub* ActorStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInPostponedSpawnRevealState(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsComponentOwnerInPostponedSpawnRevealState(const UActorComponent* ActorComponent);
    
};

