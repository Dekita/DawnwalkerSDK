#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WorldStateSystemInterface.generated.h"

class USkyCreatorWeatherPreset;

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API UWorldStateSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UWorldStateSystemInterface();

    UFUNCTION(BlueprintCallable)
    void BP_ChangeWeather(USkyCreatorWeatherPreset* WeatherPreset, float BlendTime, float FogMinHeight, float FogTargetHeight, const FName Source);
    
};

