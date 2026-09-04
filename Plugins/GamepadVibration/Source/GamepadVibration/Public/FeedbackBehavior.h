#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FeedbackBehavior.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable)
class GAMEPADVIBRATION_API UFeedbackBehavior : public UDataAsset {
    GENERATED_BODY()
public:
    UFeedbackBehavior();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopEffect(APlayerController* PC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEffect(APlayerController* PC, bool bLooping, bool bPlayWhilePaused) const;
    
};

