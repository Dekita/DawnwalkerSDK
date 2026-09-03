#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DawnwalkerSignificanceSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DAWNWALKER_API UDawnwalkerSignificanceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SignificanceEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CastShadowEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NPCAudioDistanceEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCAudioDistance;
    
    UDawnwalkerSignificanceSettings();

};

