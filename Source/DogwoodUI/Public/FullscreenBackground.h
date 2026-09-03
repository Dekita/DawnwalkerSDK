#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "Components/Widget.h"
#include "FullscreenBackground.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class DOGWOODUI_API UFullscreenBackground : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs FadeInArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackgroundTexture;
    
    UFullscreenBackground();

    UFUNCTION(BlueprintCallable)
    void SetBackgroundTexture(TSoftObjectPtr<UTexture2D> InBackgroundTexture, bool WithFadeOut);
    
};

