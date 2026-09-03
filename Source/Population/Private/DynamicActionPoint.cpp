#include "DynamicActionPoint.h"
#include "ActionSlotComponent.h"

ADynamicActionPoint::ADynamicActionPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UActionSlotComponent>(TEXT("ActionSlot"))) {
    this->ActionSlot = (UActionSlotComponent*)RootComponent;
    this->TagIndex = 0;
}


