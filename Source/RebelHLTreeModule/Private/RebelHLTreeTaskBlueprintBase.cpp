#include "RebelHLTreeTaskBlueprintBase.h"

URebelHLTreeTaskBlueprintBase::URebelHLTreeTaskBlueprintBase() {
    this->bShouldStateChangeOnReselect = true;
    this->bShouldCallTickOnlyOnEvents = false;
    this->bShouldCopyBoundPropertiesOnTick = true;
    this->bShouldCopyBoundPropertiesOnExitState = true;
}







void URebelHLTreeTaskBlueprintBase::FinishTask(const bool bSucceeded) {
}


