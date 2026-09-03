#pragma once
#include "CoreMinimal.h"
#include "ListenerPair.generated.h"

class ARWAudioListener;

USTRUCT(BlueprintType)
struct WWISEEXTENSIONS_API FListenerPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARWAudioListener> Listener;
    
    FListenerPair();
};

