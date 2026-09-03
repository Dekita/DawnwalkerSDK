#pragma once
#include "CoreMinimal.h"
#include "SwitchParams.h"
#include "RebelAINPCSoundEvent.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAINPCSoundEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> SoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchParams> SoundSwitches;
    
    FRebelAINPCSoundEvent();
};

