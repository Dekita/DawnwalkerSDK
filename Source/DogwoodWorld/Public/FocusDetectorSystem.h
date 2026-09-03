#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FocusDetectorSystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UFocusDetectorSystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UFocusDetectorSystem();

};

