#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "ActiveSlowdownData.h"
#include "SlowMotionSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API USlowMotionSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FActiveSlowdownData> ActiveSlowdowns;
    
public:
    USlowMotionSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveSlowdownCompensatePlayerDilation(const UObject* Source, bool bRemoveSlowdownImmediately);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlowdown(const UObject* Source);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayerCustomDilationActive() const;
    
    UFUNCTION(BlueprintCallable)
    void AddSlowdownCompensatePlayerDilation(UObject* Source, float TargetTimeDilation, float SmoothDuration, bool bSetIgnoreCameraTickCompensation);
    
    UFUNCTION(BlueprintCallable)
    void AddSlowdown(UObject* Source, float TargetTimeDilation, float SmoothDuration, FGameplayTag AdditionalData, bool bSetIgnoreCameraTickCompensation);
    
};

