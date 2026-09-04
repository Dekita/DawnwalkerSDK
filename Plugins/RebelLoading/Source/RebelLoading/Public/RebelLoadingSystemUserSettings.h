#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelLoadingSystemUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class REBELLOADING_API URebelLoadingSystemUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLoadingScreenInEditor;
    
    URebelLoadingSystemUserSettings();

};

