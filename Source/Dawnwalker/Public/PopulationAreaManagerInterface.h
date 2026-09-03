#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PopulationAreaManagerInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UPopulationAreaManagerInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPopulationAreaManagerInterface();

};

