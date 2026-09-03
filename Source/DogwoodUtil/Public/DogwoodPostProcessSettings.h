#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "DogwoodPostProcessSettings.generated.h"

class UDogwoodPostProcessConfig;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODUTIL_API UDogwoodPostProcessSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UDogwoodPostProcessConfig>> PostProcessesForPlayerTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> PlayVideoPostProcesses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> FadeOutPostProcessesTags;
    
    UDogwoodPostProcessSettings();

};

