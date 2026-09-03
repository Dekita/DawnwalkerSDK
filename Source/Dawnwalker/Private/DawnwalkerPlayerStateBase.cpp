#include "DawnwalkerPlayerStateBase.h"
#include "BloodBarComponent.h"

ADawnwalkerPlayerStateBase::ADawnwalkerPlayerStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BloodBar = CreateDefaultSubobject<UBloodBarComponent>(TEXT("Blood Bar"));
}


