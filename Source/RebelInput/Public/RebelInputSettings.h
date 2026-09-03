#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelInputSettings.generated.h"

class UDataTable;
class UInputMappingContext;
class URebelInputPreset;
class URebelInputSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELINPUT_API URebelInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MappedInputsTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UInputMappingContext>> RebindableMappingContexts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelInputPreset> DefaultKeyboardPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<URebelInputPreset>> GamepadPresets;
    
    URebelInputSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelInputSettings* Get();
    
};

