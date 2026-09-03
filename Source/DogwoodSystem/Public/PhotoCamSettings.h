#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PhotoCamSettings.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODSYSTEM_API UPhotoCamSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputMappingContext> CameraModeMappingContext;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputAction> CameraMovementAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputAction> CameraVerticalMovementAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputAction> CameraLookAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputAction> ReleaseCameraInputAction;
    
    UPhotoCamSettings();

};

