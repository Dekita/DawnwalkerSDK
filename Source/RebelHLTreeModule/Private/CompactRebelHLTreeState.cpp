#include "CompactRebelHLTreeState.h"

FCompactRebelHLTreeState::FCompactRebelHLTreeState() {
    this->LinkedAsset = NULL;
    this->ChildrenBegin = 0;
    this->ChildrenEnd = 0;
    this->EnterConditionsBegin = 0;
    this->TransitionsBegin = 0;
    this->TasksBegin = 0;
    this->EnterConditionsNum = 0;
    this->TransitionsNum = 0;
    this->TasksNum = 0;
    this->InstanceDataNum = 0;
    this->Type = ERebelHLTreeStateType::State;
    this->SelectionBehavior = ERebelHLTreeStateSelectionBehavior::None;
    this->bHasTransitionTasks = false;
    this->bEnabled = false;
}

