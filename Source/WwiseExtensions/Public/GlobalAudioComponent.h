#pragma once
#include "CoreMinimal.h"
#include "RWAudioComponent.h"
#include "GlobalAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWISEEXTENSIONS_API UGlobalAudioComponent : public URWAudioComponent {
    GENERATED_BODY()
public:
    UGlobalAudioComponent(const FObjectInitializer& ObjectInitializer);

};

