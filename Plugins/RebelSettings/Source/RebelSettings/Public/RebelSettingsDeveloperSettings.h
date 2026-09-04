#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ERebelQuality.h"
#include "ERebelAmbientOcclusionMethod.h"
#include "RebelCinematicModeCvarDescriptor.h"
#include "RebelSettingsDeveloperSettings.generated.h"

class URebelSettingsDeveloperSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELSETTINGS_API URebelSettingsDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeOverEditorSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesAllowPostProcessBlendablesQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality AllowPostProcessBlendablesQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAmbientOcclusionMethod AmbientOcclusionMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesAllowAmbientOcclusionQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality AllowAmbientOcclusionQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesAllowFogQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality AllowFogQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesAllowVolumetricFogQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality AllowVolumetricFogQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesAllowScreenSpaceReflectionsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality AllowScreenSpaceReflectionsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesAllowLumenReflectionsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality AllowLumenReflectionsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelCinematicModeCvarDescriptor> CinematicModeOptimizations;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenSpaceAmbientOcclusionMaxQuality[6];
    
    URebelSettingsDeveloperSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelSettingsDeveloperSettings* Get();
    
};

