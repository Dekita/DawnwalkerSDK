#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CommunitySystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UCommunitySystemInterface : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UCommunitySystemInterface();

};

