#pragma once
#include "CoreMinimal.h"
#include "SwitchParams.h"
#include "RebelAINPCSoundEvent.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FRebelAINPCSoundEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchParams> SoundSwitches;
    
    REBELAI_API FRebelAINPCSoundEvent();
};

