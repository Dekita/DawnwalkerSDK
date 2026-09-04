#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Widgets/Layout/SScaleBox.h"
#include "VideoPlaybackOptions.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FVideoPlaybackOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> Stretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnskippable;
    
    DOGWOODUI_API FVideoPlaybackOptions();
};

