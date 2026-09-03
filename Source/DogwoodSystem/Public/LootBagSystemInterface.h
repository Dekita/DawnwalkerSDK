#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LootBagSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API ULootBagSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    ULootBagSystemInterface();

};

