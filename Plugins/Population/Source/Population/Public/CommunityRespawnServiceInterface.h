#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CommunityRespawnServiceInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UCommunityRespawnServiceInterface : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UCommunityRespawnServiceInterface();

};

