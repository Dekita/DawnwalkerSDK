#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WardConfig.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UWardConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ActiveWardSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* WardDispelSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RuneThreadParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RuneDispelSystem;
    
    UWardConfig();

};

