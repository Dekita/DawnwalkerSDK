#pragma once
#include "CoreMinimal.h"
#include "SaveGameInterface.h"
#include "EQuestTimeProgressionType.h"
#include "Objective.h"
#include "DayTime.h"
#include "EDayPhase.h"
#include "OnDayPhaseChangedDynamicDelegate.h"
#include "OnDayTimeChangedDynamicDelegate.h"
#include "OnTimeDeadlineRangeUpdatedDelegate.h"
#include "SegmentedDayTime.h"
#include "TimeSystemInterface.h"
#include "TimeSystemImpl.generated.h"

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UTimeSystemImpl : public UTimeSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGoalMovedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDayTimeChangedDynamic OnDayTimeChangedDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDayTimeChangedDynamic OnInterpolatedDayTimeChangedDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDayPhaseChangedDynamic OnDayPhaseChangedDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDayPhaseChangedDynamic OnDayPhaseSkippedDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeDeadlineRangeUpdated OnTimeDeadlineRangeUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoalMovedDelegate OnMainGoalMoved;
    
    UTimeSystemImpl();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillSegmentProgressionChangePhase(int32 SegmentChange, EDayPhase& OutBefore, EDayPhase& OutAfter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillProgressionChangePhase(EQuestTimeProgressionType TimeProgressionType, EDayPhase& OutBefore, EDayPhase& OutAfter) const;
    
    UFUNCTION(BlueprintCallable)
    void SetTime(uint8 Hour, uint8 Minute, uint8 Second, bool bAbsoluteTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhaseTransitionQueuedOrInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTimeOfDayName(const FSegmentedDayTime& InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSegmentsUntilPhaseChange(int32& FirstChange, EDayPhase& FirstPhase, int32& SecondChange, EDayPhase& SecondPhase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetQuestTimeProgressionTypeTimeString(EQuestTimeProgressionType TimeProgressionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetQuestTimeProgressionTypeTimeFloat(EQuestTimeProgressionType TimeProgressionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestTimeProgressionTypeSegmentCount(EQuestTimeProgressionType TimeProgressionType) const;
    
    UFUNCTION(BlueprintCallable)
    FDayTime GetPendingDayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSegmentedDayTime GetOffsetTime(float SegmentOFfset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveSegmentTimeProgression(const FObjective& Objective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainGoalDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLastPrologueDay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDayTime GetDayStartDayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDayTimeAsFloat() const;
    
    UFUNCTION(BlueprintCallable)
    FDayTime GetCurrentDayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSegmentedDayTime ConvertDayTimeToSegmentedTime(const FDayTime& InTime) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddTimeSegments(float Segments);
    

    // Fix for true pure virtual functions not being implemented
};

