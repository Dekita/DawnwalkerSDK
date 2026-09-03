#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SaveGameInterface.h"
#include "LootableSubsystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API ULootableSubsystem : public UGameInstanceSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    ULootableSubsystem();


    // Fix for true pure virtual functions not being implemented
};

