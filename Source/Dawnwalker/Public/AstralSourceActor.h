#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExtendedSpawnData.h"
#include "AstralSourceActor.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class DAWNWALKER_API AAstralSourceActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SpawnTrailFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SpawnHitFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnVfxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnVfxBulgeFactor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FExtendedSpawnData> ActiveSpawns;
    
public:
    AAstralSourceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopWaiting();
    
    UFUNCTION(BlueprintCallable)
    void StartWaiting();
    
};

