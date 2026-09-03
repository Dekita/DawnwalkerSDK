#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeChangeWeather.generated.h"

class USkyCreatorWeatherPreset;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeChangeWeather : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkyCreatorWeatherPreset* WeatherPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogTargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Source;
    
public:
    UQuestNodeChangeWeather();

};

