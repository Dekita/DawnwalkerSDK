#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CinematicDialogue.h"
#include "VoiceSet.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UVoiceSet : public UCinematicDialogue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoiceTag;
    
    UVoiceSet();

};

