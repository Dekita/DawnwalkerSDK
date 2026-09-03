#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CancellableAsyncAction.h"
#include "FailedToSpawnPopulationActorDelegateDelegate.h"
#include "SpawnedPopulationActorDelegateDelegate.h"
#include "SpawnPopulationActorAsyncAction.generated.h"

class APopulationSimpleSpawner;
class UAIDefinition;
class UCommunityNPCDefinitionBase;
class UObject;
class USpawnPopulationActorAsyncAction;
class UWorld;

UCLASS(Blueprintable)
class DAWNWALKER_API USpawnPopulationActorAsyncAction : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnedPopulationActorDelegate Spawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFailedToSpawnPopulationActorDelegate Failed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    APopulationSimpleSpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> ContextWorld;
    
public:
    USpawnPopulationActorAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static USpawnPopulationActorAsyncAction* RunAsyncAction(const UObject* WorldContext, TSoftClassPtr<UCommunityNPCDefinitionBase> NPCDefinitionClass, TSoftClassPtr<UAIDefinition> AIDefinitionClass, const FVector& Location, float Rotation);
    
};

