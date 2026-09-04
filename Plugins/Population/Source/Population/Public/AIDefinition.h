#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIDefinition.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UAIDefinition : public UObject {
    GENERATED_BODY()
public:
    UAIDefinition();

};

