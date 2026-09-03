#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "QuickslotSubsystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UQuickslotSubsystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UQuickslotSubsystem();


    // Fix for true pure virtual functions not being implemented
};

