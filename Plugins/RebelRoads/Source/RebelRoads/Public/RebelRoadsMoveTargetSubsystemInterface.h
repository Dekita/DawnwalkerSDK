#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelRoadsMoveTargetSubsystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELROADS_API URebelRoadsMoveTargetSubsystemInterface : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    URebelRoadsMoveTargetSubsystemInterface();

};

