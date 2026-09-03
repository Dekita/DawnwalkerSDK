#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "EiiWorldSubsystem.generated.h"

class AActor;
class UEiiMeshToActorMapping;
class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class ERRANTINSTANCEINTERACTION_API UEiiWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UEiiWorldSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInstancedComponentInteractedWith(const UInstancedStaticMeshComponent* InstancedComp) const;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterInstancedComponent(UInstancedStaticMeshComponent* InstancedComp);
    
    UFUNCTION(BlueprintCallable)
    bool RestoreHitActorToInstance(const FHitResult& HitRes);
    
    UFUNCTION(BlueprintCallable)
    bool RestoreActorToInstance(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInstancedComponent(UInstancedStaticMeshComponent* InstancedComp, const TSubclassOf<AActor> DefaultActorClassToConvertTo, const UEiiMeshToActorMapping* MeshToActorClassMapping);
    
    UFUNCTION(BlueprintCallable)
    AActor* ConvertInstanceToActor(UInstancedStaticMeshComponent* InstancedComp, int32 InstanceIdx, UClass* ClassOverride);
    
    UFUNCTION(BlueprintCallable)
    AActor* ConvertHitInstanceToActor(const FHitResult& HitRes);
    
};

