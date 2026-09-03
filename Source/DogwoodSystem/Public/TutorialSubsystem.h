#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TutorialSubsystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UTutorialSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTutorialSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RequestGamePause() const;
    
    UFUNCTION(BlueprintCallable)
    void NotifyTutorialConfirmed(const int64 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTutorialClosed(const int64 RequestID);
    
};

