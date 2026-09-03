#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "TraversalSubsystem.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UTraversalSubsystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UTraversalSubsystem();


    // Fix for true pure virtual functions not being implemented
};

