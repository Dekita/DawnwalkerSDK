#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "ValueTimerInterpolator.h"
#include "PostProcessSubsystem.generated.h"

class APawn;
class UDogwoodPostProcessConfig;

UCLASS(Blueprintable)
class DOGWOODUTIL_API UPostProcessSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FValueTimerInterpolator> MaterialBlendInterpolators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FValueTimerInterpolator> WeightBlendInterpolators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UDogwoodPostProcessConfig*> PostProcessConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UDogwoodPostProcessConfig*> CachedFadedOutPostProcesses;
    
public:
    UPostProcessSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTagChanged(FGameplayTag GameplayTag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
};

