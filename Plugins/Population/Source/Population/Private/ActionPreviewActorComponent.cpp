#include "ActionPreviewActorComponent.h"

UActionPreviewActorComponent::UActionPreviewActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewNPCDef = NULL;
    this->ParentActionSlot = NULL;
}


