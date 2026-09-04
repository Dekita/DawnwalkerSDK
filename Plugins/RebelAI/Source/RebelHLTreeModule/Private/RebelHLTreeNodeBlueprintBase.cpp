#include "RebelHLTreeNodeBlueprintBase.h"

URebelHLTreeNodeBlueprintBase::URebelHLTreeNodeBlueprintBase() {
    this->CachedOwner = NULL;
}

void URebelHLTreeNodeBlueprintBase::SendEvent(const FRebelHLTreeEvent& Event) {
}

void URebelHLTreeNodeBlueprintBase::RequestTransition(const FRebelHLTreeStateLink& TargetState, const ERebelHLTreeTransitionPriority Priority) {
}


