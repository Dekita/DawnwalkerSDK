#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DawnwalkerUserSettings.generated.h"

class UAppearanceBase;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class DAWNWALKER_API UDawnwalkerUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableEditorApplyAppearance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAppearanceBase> DialogueEditorPlayerPreviewAppearance;
    
    UDawnwalkerUserSettings();

};

