#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ECourtEntryPowerState.h"
#include "CourtTileColorPalette.h"
#include "DogwoodCourtUISettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODUI_API UDogwoodCourtUISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtEntryPowerState, FCourtTileColorPalette> TileColorPalette;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtEntryPowerState, FCourtTileColorPalette> ActivityColorPalette;
    
    UDogwoodCourtUISettings();

};

