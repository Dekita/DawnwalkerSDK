#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelHLTreeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=RebelHLTree)
class REBELHLTREEMODULE_API URebelHLTreeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartDebuggerTracesOnNonEditorTargets;
    
    URebelHLTreeSettings();

};

