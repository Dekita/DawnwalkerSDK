#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelRoadsSubsystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELROADS_API URebelRoadsSubsystemInterface : public UWorldSubsystem {
    GENERATED_BODY()
public:
    URebelRoadsSubsystemInterface();

};

