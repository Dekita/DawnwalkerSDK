#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EVampireHunger.h"
#include "VampireHungerLevelPostProcessSettings.h"
#include "VampireHungerPostProcessSettings.h"
#include "VampireHungerEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class DOGWOODVAMPIREHUNGER_API UVampireHungerEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVampireHungerPostProcessSettings General;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVampireHunger, FVampireHungerLevelPostProcessSettings> LevelSettings;
    
    UVampireHungerEffectDataAsset();

};

