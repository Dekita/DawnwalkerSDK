#include "TimeSystemImpl.h"

UTimeSystemImpl::UTimeSystemImpl() {
}

bool UTimeSystemImpl::WillSegmentProgressionChangePhase(int32 SegmentChange, EDayPhase& OutBefore, EDayPhase& OutAfter) const {
    return false;
}

bool UTimeSystemImpl::WillProgressionChangePhase(EQuestTimeProgressionType TimeProgressionType, EDayPhase& OutBefore, EDayPhase& OutAfter) const {
    return false;
}

void UTimeSystemImpl::SetTime(uint8 Hour, uint8 Minute, uint8 Second, bool bAbsoluteTime) {
}

bool UTimeSystemImpl::IsPhaseTransitionQueuedOrInProgress() const {
    return false;
}

FText UTimeSystemImpl::GetTimeOfDayName(const FSegmentedDayTime& InTime) {
    return FText::GetEmpty();
}

void UTimeSystemImpl::GetSegmentsUntilPhaseChange(int32& FirstChange, EDayPhase& FirstPhase, int32& SecondChange, EDayPhase& SecondPhase) const {
}

FString UTimeSystemImpl::GetQuestTimeProgressionTypeTimeString(EQuestTimeProgressionType TimeProgressionType) const {
    return TEXT("");
}

float UTimeSystemImpl::GetQuestTimeProgressionTypeTimeFloat(EQuestTimeProgressionType TimeProgressionType) const {
    return 0.0f;
}

int32 UTimeSystemImpl::GetQuestTimeProgressionTypeSegmentCount(EQuestTimeProgressionType TimeProgressionType) const {
    return 0;
}

FDayTime UTimeSystemImpl::GetPendingDayTime() {
    return FDayTime{};
}

FSegmentedDayTime UTimeSystemImpl::GetOffsetTime(float SegmentOFfset) {
    return FSegmentedDayTime{};
}

int32 UTimeSystemImpl::GetObjectiveSegmentTimeProgression(const FObjective& Objective) const {
    return 0;
}

int32 UTimeSystemImpl::GetMainGoalDay() const {
    return 0;
}

int32 UTimeSystemImpl::GetLastPrologueDay() {
    return 0;
}

FDayTime UTimeSystemImpl::GetDayStartDayTime() const {
    return FDayTime{};
}

float UTimeSystemImpl::GetCurrentDayTimeAsFloat() const {
    return 0.0f;
}

FDayTime UTimeSystemImpl::GetCurrentDayTime() {
    return FDayTime{};
}

int32 UTimeSystemImpl::GetCurrentDay() const {
    return 0;
}

FSegmentedDayTime UTimeSystemImpl::ConvertDayTimeToSegmentedTime(const FDayTime& InTime) const {
    return FSegmentedDayTime{};
}

bool UTimeSystemImpl::AddTimeSegments(float Segments) {
    return false;
}


