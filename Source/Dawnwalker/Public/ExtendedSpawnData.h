#pragma once
#include "CoreMinimal.h"
#include "ExtendedSpawnData.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FExtendedSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Vfx;
    
    FExtendedSpawnData();
};

