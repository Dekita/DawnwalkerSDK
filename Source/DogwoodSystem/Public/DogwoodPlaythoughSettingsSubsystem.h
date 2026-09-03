#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "DogwoodPlaythoughSettingsSubsystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UDogwoodPlaythoughSettingsSubsystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UDogwoodPlaythoughSettingsSubsystem();


    // Fix for true pure virtual functions not being implemented
};

