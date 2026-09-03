#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERebelPlatformType.h"
#include "SettingCategory.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FSettingCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SettingTabTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelPlatformType, FText> PlatformNameOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SettingsTable;
    
    FSettingCategory();
};

