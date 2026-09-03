#pragma once
#include "CoreMinimal.h"
#include "RWAudioListener.h"
#include "RWAudioListenerEditor.generated.h"

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API ARWAudioListenerEditor : public ARWAudioListener {
    GENERATED_BODY()
public:
    ARWAudioListenerEditor(const FObjectInitializer& ObjectInitializer);

};

