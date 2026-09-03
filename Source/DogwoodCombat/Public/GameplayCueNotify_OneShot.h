#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CreatureTypeContainer.h"
#include "GameplayCueNotify_Static.h"
#include "GameplayCueParameters.h"
#include "NiagaraParamVariant.h"
#include "NiagaraParamVariantToCreatureType.h"
#include "GameplayCueNotify_OneShot.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UGameplayCueNotify_OneShot : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultBoneForVfxSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCreatureTypeContainer> CreaturesDefaultBoneNamesForGameplayCueVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNiagaraParamVariant> DefaultNiagaraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParamVariantToCreatureType> NiagaraParamsToCreatureTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* OneShotEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetachFromBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultLocationOffsetForVfxSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVector, FCreatureTypeContainer> CreaturesLocationOffsetForVfxSpawn;
    
public:
    UGameplayCueNotify_OneShot();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TMap<FName, FVector> GetVectorVariablesToSet(const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TMap<FName, float> GetVariablesToSet(const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TMap<FName, FLinearColor> GetColorVariablesToSet(const FGameplayCueParameters& Parameters) const;
    
};

