#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerCharacterSocket.h"
#include "DawnwalkerCharacterCombatSocket.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerCharacterCombatSocket : public FDawnwalkerCharacterSocket {
    GENERATED_BODY()
public:
    FDawnwalkerCharacterCombatSocket();
};

