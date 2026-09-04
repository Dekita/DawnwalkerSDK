#include "BTTask_BaseUseActionPoint.h"

UBTTask_BaseUseActionPoint::UBTTask_BaseUseActionPoint() {
    this->NodeName = TEXT("Use Action Point");
}

void UBTTask_BaseUseActionPoint::OnNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}


