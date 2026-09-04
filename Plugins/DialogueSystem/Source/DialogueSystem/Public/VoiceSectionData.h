#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "VoiceSectionData.generated.h"

USTRUCT(BlueprintType)
struct FVoiceSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DialogueLineGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerTag;
    
    DIALOGUESYSTEM_API FVoiceSectionData();
};

