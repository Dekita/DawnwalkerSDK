#pragma once
#include "CoreMinimal.h"
#include "EGiveTicketToAttacker_SelectionMethod.generated.h"

UENUM(BlueprintType)
enum class EGiveTicketToAttacker_SelectionMethod : uint8 {
    Random,
    Closest,
    Helper,
    RecentlyHit,
    HighestAttribute,
    AlwaysKeepStandardTicketFlag,
};

