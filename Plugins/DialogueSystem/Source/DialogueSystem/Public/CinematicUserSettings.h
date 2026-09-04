#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CinematicUserSettings.generated.h"

class UCinematicUserSettings;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class DIALOGUESYSTEM_API UCinematicUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMovieSetVisualization;
    
    UCinematicUserSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCinematicUserSettings* Get();
    
};

