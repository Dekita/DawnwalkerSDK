#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "AttributeSaveSystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODABILITYSYSTEM_API UAttributeSaveSystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UAttributeSaveSystem();


    // Fix for true pure virtual functions not being implemented
};

