#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "NiagaraParamVariant.h"
#include "NiagaraParamVariantToCreatureType.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FNiagaraParamVariantToCreatureType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer Allowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNiagaraParamVariant> NiagaraParams;
    
    FNiagaraParamVariantToCreatureType();
};

