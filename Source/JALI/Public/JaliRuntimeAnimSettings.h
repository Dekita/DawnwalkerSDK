#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EJaliLanguages.h"
#include "EJaliPollyVoices.h"
#include "EJaliRuntimeSoundMode.h"
#include "JaliRuntimeAnimSettings.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct JALI_API FJaliRuntimeAnimSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJaliRuntimeSoundMode SoundMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationConfigFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundWave> SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJaliLanguages Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Transcript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJaliPollyVoices PollyVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExternalDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExternalBasename;
    
    FJaliRuntimeAnimSettings();
};

