#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RealTimeSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API URealTimeSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URealTimeSystemInterface();

};

