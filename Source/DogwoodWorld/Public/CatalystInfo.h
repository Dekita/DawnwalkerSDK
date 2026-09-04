#pragma once
#include "CoreMinimal.h"
#include "CatalystInfo.generated.h"

class ANecrospeakLootable;

USTRUCT(BlueprintType)
struct FCatalystInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANecrospeakLootable* CatalystActor;
    
    DOGWOODWORLD_API FCatalystInfo();
};

