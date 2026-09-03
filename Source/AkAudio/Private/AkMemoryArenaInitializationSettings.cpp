#include "AkMemoryArenaInitializationSettings.h"

FAkMemoryArenaInitializationSettings::FAkMemoryArenaInitializationSettings() {
    this->PrimarySbaInitSize = 0;
    this->PrimaryTlsfInitSize = 0;
    this->PrimaryTlsfSpanSize = 0;
    this->PrimaryMemReservedLimit = 0;
    this->PrimaryAllocSizeHuge = 0;
    this->MediaTlsfInitSize = 0;
    this->MediaTlsfSpanSize = 0;
    this->MediaMemReservedLimit = 0;
    this->MediaAllocSizeHuge = 0;
}

