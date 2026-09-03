#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "AudioAnimationNotifyHelperSubsystem.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioAnimationNotifyHelperSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UAudioAnimationNotifyHelperSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnSlowdownRemovedSourceAnimNotify() const;
    
    UFUNCTION(BlueprintCallable)
    void OnSlowdownAddedSourceAnimNotify(FGameplayTag AdditionalData) const;
    
};

