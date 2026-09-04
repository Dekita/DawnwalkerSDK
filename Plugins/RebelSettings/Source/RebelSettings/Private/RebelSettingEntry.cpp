#include "RebelSettingEntry.h"

FRebelSettingEntry::FRebelSettingEntry() {
    this->Type = ERebelSettingEntryType::Setting;
    this->bHideInShipping = false;
    this->PlatformMask = 0;
    this->ConsolePlatformMask = 0;
}

