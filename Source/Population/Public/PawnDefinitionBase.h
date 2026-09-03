#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PawnDefinitionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UPawnDefinitionBase : public UObject {
    GENERATED_BODY()
public:
    UPawnDefinitionBase();

};

