#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MvnRemoteControlManager.generated.h"

UCLASS(Blueprintable)
class LIVELINKMVNPLUGIN_API UMvnRemoteControlManager : public UObject {
    GENERATED_BODY()
public:
    UMvnRemoteControlManager();

    UFUNCTION(BlueprintCallable)
    static void StopRecording(float _fTimeOffsetInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void StartRecording(float _fTimeOffsetInSeconds);
    
};

