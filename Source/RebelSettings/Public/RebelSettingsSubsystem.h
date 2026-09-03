#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "RebelSettingsSubsystem.generated.h"

class UDataTable;
class UStringTable;

UCLASS(Blueprintable)
class REBELSETTINGS_API URebelSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStringTable*> LoadedStringTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UDataTable*> LoadedSettingsTables;
    
    URebelSettingsSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetSettingTabTable(const FGameplayTag& Tag);
    
};

