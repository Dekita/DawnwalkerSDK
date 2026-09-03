#pragma once
#include "CoreMinimal.h"
#include "EJournalDaySegmentType.generated.h"

UENUM(BlueprintType)
enum class EJournalDaySegmentType : uint8 {
    Past,
    None,
    FutureQuestObjective,
    FutureQuestTotalDuration,
};

