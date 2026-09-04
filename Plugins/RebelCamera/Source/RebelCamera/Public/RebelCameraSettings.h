#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AlphaBlend.h"
#include "RebelCameraThirdPersonCollisionSettings.h"
#include "RebelCameraSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELCAMERA_API URebelCameraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorUpForTPP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs CrouchBlendInArgs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs CrouchBlendOutArgs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelCameraThirdPersonCollisionSettings DefaultThirdPersonCollisionSettings;
    
    URebelCameraSettings();

};

