#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SettingCategory.h"
#include "RebelSettingsUIDeveloperSettings.generated.h"

class UStringTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELSETTINGS_API URebelSettingsUIDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSettingCategory> Settings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> CategoriesStringTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> LanguageStringTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> GenericOptionsStringTable;
    
    URebelSettingsUIDeveloperSettings();

};

