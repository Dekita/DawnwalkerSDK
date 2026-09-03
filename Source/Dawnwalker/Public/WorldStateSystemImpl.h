#pragma once
#include "CoreMinimal.h"
#include "WorldStateSystemInterface.h"
#include "SaveGameInterface.h"
#include "WorldStateSystemImpl.generated.h"

class UDawnwalkerStreamingManager;
class UMaterialParameterCollection;
class USkyCreatorWeatherPreset;
class UTimeSystemInterface;

UCLASS(Blueprintable)
class DAWNWALKER_API UWorldStateSystemImpl : public UWorldStateSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkyCreatorWeatherPreset* WeatherPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTimeSystemInterface* TimeSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerStreamingManager* StreamingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CommonMPC;
    
public:
    UWorldStateSystemImpl();


    // Fix for true pure virtual functions not being implemented
};

