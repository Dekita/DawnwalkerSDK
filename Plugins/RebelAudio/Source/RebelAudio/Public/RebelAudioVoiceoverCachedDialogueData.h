#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAudioVoiceoverCachedDialogueData.generated.h"

USTRUCT(BlueprintType)
struct REBELAUDIO_API FRebelAudioVoiceoverCachedDialogueData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> LineGuids;
    
public:
    FRebelAudioVoiceoverCachedDialogueData();
};

