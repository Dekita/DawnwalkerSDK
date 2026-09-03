#pragma once
#include "CoreMinimal.h"
#include "CommunityBaseActivator.h"
#include "DebugSpawnActivator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POPULATION_API UDebugSpawnActivator : public UCommunityBaseActivator {
    GENERATED_BODY()
public:
    UDebugSpawnActivator();

};

