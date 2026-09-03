#include "BareExpandableArea.h"

UBareExpandableArea::UBareExpandableArea() {
    this->bIsExpanded = true;
    this->RolloutAnimationSeconds = 0.25f;
    this->HeaderContent = NULL;
    this->BodyContent = NULL;
}

void UBareExpandableArea::SetIsExpanded_Animated(bool IsExpanded) {
}

void UBareExpandableArea::SetIsExpanded(bool IsExpanded) {
}

bool UBareExpandableArea::GetIsExpanded() const {
    return false;
}


