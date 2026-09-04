#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "SaveSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class PERSISTENCY_API USaveSystemInterface : public UEngineSubsystem {
    GENERATED_BODY()
public:
    USaveSystemInterface();

};

