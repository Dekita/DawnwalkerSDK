#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "TimeSystemUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class DOGWOODSYSTEM_API UTimeSystemUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTimeSkipLoadingScreen;
    
    UTimeSystemUserSettings();

};

