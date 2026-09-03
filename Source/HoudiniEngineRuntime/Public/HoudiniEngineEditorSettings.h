#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HoudiniEngineEditorSettings.generated.h"

UCLASS(Blueprintable, Config=HoudiniEngine)
class HOUDINIENGINERUNTIME_API UHoudiniEngineEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UHoudiniEngineEditorSettings();

};

