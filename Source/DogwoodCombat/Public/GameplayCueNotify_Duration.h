#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CreatureTypeContainer.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayCueNotify_Actor.h"
#include "GameplayCueParameters.h"
#include "AttributeBasedNiagaraProperty.h"
#include "NiagaraParamVariant.h"
#include "NiagaraParamVariantToCreatureType.h"
#include "GameplayCueNotify_Duration.generated.h"

class AActor;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, NotPlaceable)
class DOGWOODCOMBAT_API AGameplayCueNotify_Duration : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultBoneForVfxSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCreatureTypeContainer> CreaturesDefaultBoneNamesForGameplayCueVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* DurationEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DurationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNiagaraParamVariant> DefaultNiagaraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParamVariantToCreatureType> NiagaraParamsToCreatureTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationEffectStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetachFromBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultLocationOffsetForVfxSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVector, FCreatureTypeContainer> CreaturesLocationOffsetForVfxSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotatorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeBasedNiagaraProperty AttributeBasedNiagaraProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultBoneForRemovalVfxSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCreatureTypeContainer> CreaturesDefaultBoneNamesForRemovalGameplayCueVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RemovalEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNiagaraParamVariant> RemovalEffectDefaultNiagaraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParamVariantToCreatureType> RemovalEffectNiagaraParamsToCreatureTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RemovalEffectRotatorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeEndToFireRemovalEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle ParentEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasRemovalEffectFired;
    
public:
    AGameplayCueNotify_Duration(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindFromAttributeChange(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetUpdatedPosition(UPARAM(Ref) FVector& StartLocation, UPARAM(Ref) FVector& EndLocation, float ElapsedTime, float TravelTime, float ArcHeight, float Exponent, float ArcWidth);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle GetEffectHandle(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetAttributeAsPercentage(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void BindToAttributeChange(AActor* Target);
    
};

