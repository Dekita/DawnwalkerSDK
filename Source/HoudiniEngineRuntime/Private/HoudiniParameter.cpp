#include "HoudiniParameter.h"

UHoudiniParameter::UHoudiniParameter() {
    this->ParmType = EHoudiniParameterType::Invalid;
    this->ChoiceListType = EHoudiniParameterChoiceListType::None;
    this->TupleSize = 0;
    this->NodeID = -1;
    this->ParmId = -1;
    this->ParentParmId = -1;
    this->ChildIndex = -1;
    this->bIsVisible = true;
    this->bIsParentFolderVisible = false;
    this->bIsDisabled = false;
    this->bHasChanged = false;
    this->bNeedsToTriggerUpdate = true;
    this->bIsDefault = false;
    this->bIsSpare = false;
    this->bJoinNext = false;
    this->bIsLabelVisible = true;
    this->bIsChildOfMultiParm = false;
    this->bIsDirectChildOfMultiParm = false;
    this->bPendingRevertToDefault = false;
    this->TagCount = 0;
    this->ValueIndex = -1;
    this->bHasExpression = false;
    this->bShowExpression = false;
    this->bAutoUpdate = true;
}


