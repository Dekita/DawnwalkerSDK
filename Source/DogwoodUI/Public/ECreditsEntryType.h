#pragma once
#include "CoreMinimal.h"
#include "ECreditsEntryType.generated.h"

UENUM(BlueprintType)
enum class ECreditsEntryType : uint8 {
    None,
    Intro,
    Outro,
    Header,
    Section,
    SubSection,
    Text,
    EntryTitled,
    Entry,
    EntryDouble,
};

