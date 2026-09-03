#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DogwoodChatDesc.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDogwoodChatDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ParticipantsVoiceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DialogueIndex;
    
    FDogwoodChatDesc();
};

