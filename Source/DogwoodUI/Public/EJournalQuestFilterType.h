#pragma once
#include "CoreMinimal.h"
#include "EJournalQuestFilterType.generated.h"

UENUM(BlueprintType)
enum class EJournalQuestFilterType : uint8 {
    All,
    Main,
    Side,
    POI,
    Completed,
};

