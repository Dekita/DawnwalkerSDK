#pragma once
#include "CoreMinimal.h"
#include "PawnDefinitionBase.h"
#include "PlayerDefinitionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UPlayerDefinitionBase : public UPawnDefinitionBase {
    GENERATED_BODY()
public:
    UPlayerDefinitionBase();

};

