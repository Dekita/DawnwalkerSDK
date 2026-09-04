#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DogwoodAudioLocalSettings.generated.h"

class UCommunityNPCDefinitionBase;
class UDogwoodAudioLocalSettings;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class UDogwoodAudioLocalSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Preview_IsMainCharacter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Preview_FallbackToGlobalPost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommunityNPCDefinitionBase> Preview_NpcDefinition;
    
    UDogwoodAudioLocalSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDogwoodAudioLocalSettings* GetDogwoodAudioLocalSettings();
    
};

