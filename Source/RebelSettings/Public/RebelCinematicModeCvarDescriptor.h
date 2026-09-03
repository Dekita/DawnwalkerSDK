#pragma once
#include "CoreMinimal.h"
#include "ERebelQuality.h"
#include "ERebelCinematicSettingOverrideMode.h"
#include "ERebelSetting.h"
#include "RebelCinematicModeCvarDescriptor.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FRebelCinematicModeCvarDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelCinematicSettingOverrideMode OverrideMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueDuringCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueOutsideCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelSetting SettingResponsible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality MaxQualityToDropDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelQuality MinQualityToBumpUp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float QualityOffsets[6];
    
    FRebelCinematicModeCvarDescriptor();
};

