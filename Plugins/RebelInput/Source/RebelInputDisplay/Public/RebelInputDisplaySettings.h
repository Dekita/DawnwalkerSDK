#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Engine/DeveloperSettings.h"
#include "ERebelInputDisplayGroup.h"
#include "ERebelInputIconType.h"
#include "Styling/SlateBrush.h"
#include "RebelInputDisplaySettings.generated.h"

class URebelInputDisplayConfig;
class URebelInputDisplaySettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELINPUTDISPLAY_API URebelInputDisplaySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelInputDisplayGroup, FText> InputDisplayGroupNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelInputIconType, TSoftObjectPtr<URebelInputDisplayConfig>> IconMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MissingIconBrush;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MissingKeyBrush;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECommonInputType, FSlateBrush> ProgressMaterialForInputType;
    
    URebelInputDisplaySettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelInputDisplaySettings* Get();
    
};

