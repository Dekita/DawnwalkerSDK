#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVampireHunger.h"
#include "VampireHungerRow.generated.h"

class UVampireUrgeEffectDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODVAMPIREHUNGER_API FVampireHungerRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireHunger VampireHungerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToLoseControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChromaticAberrationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVampireUrgeEffectDataAsset* VampireUrgeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVampireUrgeEffectDataAsset* AlwaysVisibleVampireUrgeEffect;
    
    FVampireHungerRow();
};

