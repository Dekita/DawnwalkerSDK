#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AutoLookAtTargetKey.h"
#include "CameraDialogueSetSettings.h"
#include "LookAtTargetSettings.h"
#include "SpeakerSlot.h"
#include "DialogueMovieSetPreset.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UDialogueMovieSetPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> MirrorAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpeakerSlot> SlotsA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpeakerSlot> SlotsB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraDialogueSetSettings> CameraSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLookAtTargetSettings> CustomLookAtTargetDefaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FAutoLookAtTargetKey, FLookAtTargetSettings> AutoLookAtTargetDefaultSettings;
    
    UDialogueMovieSetPreset();

};

