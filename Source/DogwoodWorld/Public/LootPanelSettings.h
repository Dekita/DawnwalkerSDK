#pragma once
#include "CoreMinimal.h"
#include "LootPanelSettings.generated.h"

USTRUCT(BlueprintType)
struct FLootPanelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowExtraPoliceSpawning;
    
    DOGWOODWORLD_API FLootPanelSettings();
};

