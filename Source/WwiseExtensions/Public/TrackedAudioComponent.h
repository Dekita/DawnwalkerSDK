#pragma once
#include "CoreMinimal.h"
#include "TrackedAudioComponent.generated.h"

class URWAudioComponent;

USTRUCT(BlueprintType)
struct WWISEEXTENSIONS_API FTrackedAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URWAudioComponent* AudioComponent;
    
    FTrackedAudioComponent();
};

