#include "QuestConditionCameraFocusType.h"

UQuestConditionCameraFocusType::UQuestConditionCameraFocusType() {
    this->RequiredTime = 10.00f;
    this->ScreenWidthPercent = 100;
    this->ScreenHeightPercent = 100;
    this->MaxDistance = 0;
    this->bIgnoreObstacles = true;
    this->TraceCollisionChannel = ECC_Visibility;
}


