#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DogwoodNPCBehavior.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODAI_API UDogwoodNPCBehavior : public UObject {
    GENERATED_BODY()
public:
    UDogwoodNPCBehavior();

};

