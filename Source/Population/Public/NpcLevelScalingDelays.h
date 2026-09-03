#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NpcLevelScalingDelayValues.h"
#include "NpcLevelScalingDelays.generated.h"

class UPawnDefinitionBase;

UCLASS(Blueprintable)
class POPULATION_API UNpcLevelScalingDelays : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UPawnDefinitionBase>, FNpcLevelScalingDelayValues> LevelScalingDelays;
    
    UNpcLevelScalingDelays();

};

