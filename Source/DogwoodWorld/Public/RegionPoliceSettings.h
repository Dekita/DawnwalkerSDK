#pragma once
#include "CoreMinimal.h"
#include "RegionPoliceSettings.generated.h"

class UCinematicDialogue;
class UDataTable;

USTRUCT(BlueprintType)
struct DOGWOODWORLD_API FRegionPoliceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCinematicDialogue> ImprisonedDialogue;
    
    FRegionPoliceSettings();
};

