#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "WorldEditorUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class DOGWOODWORLD_API UWorldEditorUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInteractableIcons;
    
    UWorldEditorUserSettings();

};

