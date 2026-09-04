#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelLoadingSystemSettings.generated.h"

class UCommonActivatableWidget;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELLOADING_API URebelLoadingSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> LoadingScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalLoadingScreenHoldTime;
    
    URebelLoadingSystemSettings();

};

