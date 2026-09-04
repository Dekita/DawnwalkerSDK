#pragma once
#include "CoreMinimal.h"
#include "GestureDensitySettings.h"
#include "GestureSetConfig.h"
#include "GestureSettings.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FGestureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGestureConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGestureSetConfig> GestureConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGestureDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGestureDensitySettings GestureDensitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultGestureWeight;
    
    FGestureSettings();
};

