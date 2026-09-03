#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DogwoodMapsEditorSettings.generated.h"

UCLASS(Blueprintable, ProjectUserConfig, Config=Editor)
class DOGWOODMAP_API UDogwoodMapsEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowAllMappins;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawPathToTrackedMappins;
    
public:
    UDogwoodMapsEditorSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDisplayMappinDebugInfo();
    
};

