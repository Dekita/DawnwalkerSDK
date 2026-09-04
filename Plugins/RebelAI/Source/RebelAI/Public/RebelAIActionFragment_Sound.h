#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIActionFragment.h"
#include "SwitchParams.h"
#include "RebelAIActionFragment_Sound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Sound : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchParams> SoundSwitches;
    
    FRebelAIActionFragment_Sound();
};

