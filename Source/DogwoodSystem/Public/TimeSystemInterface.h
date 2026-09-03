#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TimeSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API UTimeSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTimeSystemInterface();

};

