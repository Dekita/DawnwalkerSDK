#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "HUDVisibilitySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODUI_API UHUDVisibilitySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WidgetsVisibleWhenHudHidden;
    
    UHUDVisibilitySettings();

};

