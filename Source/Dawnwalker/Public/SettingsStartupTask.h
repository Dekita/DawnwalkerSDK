#pragma once
#include "CoreMinimal.h"
#include "OptionalDialogueStartupTaskBase.h"
#include "ERebelSetting.h"
#include "SettingsStartupTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API USettingsStartupTask : public UOptionalDialogueStartupTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> SettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> CVarOverride;
    
    USettingsStartupTask();

};

