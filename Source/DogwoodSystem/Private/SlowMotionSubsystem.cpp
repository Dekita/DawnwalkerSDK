#include "SlowMotionSubsystem.h"

USlowMotionSubsystem::USlowMotionSubsystem() {
}

void USlowMotionSubsystem::RemoveSlowdownCompensatePlayerDilation(const UObject* Source, bool bRemoveSlowdownImmediately) {
}

void USlowMotionSubsystem::RemoveSlowdown(const UObject* Source) {
}

bool USlowMotionSubsystem::GetIsPlayerCustomDilationActive() const {
    return false;
}

void USlowMotionSubsystem::AddSlowdownCompensatePlayerDilation(UObject* Source, float TargetTimeDilation, float SmoothDuration, bool bSetIgnoreCameraTickCompensation) {
}

void USlowMotionSubsystem::AddSlowdown(UObject* Source, float TargetTimeDilation, float SmoothDuration, FGameplayTag AdditionalData, bool bSetIgnoreCameraTickCompensation) {
}


