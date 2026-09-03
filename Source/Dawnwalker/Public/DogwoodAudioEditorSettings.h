#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DogwoodAudioEditorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class DAWNWALKER_API UDogwoodAudioEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AudioUserNamesForAnimCheckerTool;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AudioChangedAnimsCollectionName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReportChangeDaysThreshold;
    
    UDogwoodAudioEditorSettings();

};

