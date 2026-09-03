#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PopulationSystemUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class POPULATION_API UPopulationSystemUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPopulationSystemUserSettings();

};

