#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelRoadsDebugSubsystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELROADS_API URebelRoadsDebugSubsystemInterface : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    URebelRoadsDebugSubsystemInterface();

};

