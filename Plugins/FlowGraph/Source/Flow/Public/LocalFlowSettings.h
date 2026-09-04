#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "LocalFlowSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class FLOW_API ULocalFlowSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseColorblindNodeColors;
    
    ULocalFlowSettings();

};

