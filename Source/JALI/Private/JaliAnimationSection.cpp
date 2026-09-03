#include "JaliAnimationSection.h"
#include "JSync.h"

UJaliAnimationSection::UJaliAnimationSection() {
    this->JSync = CreateDefaultSubobject<UJSync>(TEXT("JSyncObject"));
}


