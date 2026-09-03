#pragma once
#include "CoreMinimal.h"
#include "RebelAudioArrayOfStates.generated.h"

class UAkStateValue;

USTRUCT(BlueprintType)
struct REBELAUDIO_API FRebelAudioArrayOfStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkStateValue*> States;
    
    FRebelAudioArrayOfStates();
};

