#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialElementDefinition_Complex.h"
#include "RebelSpatialElementDefinition_Blueprint.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELSPATIALSYSTEM_API URebelSpatialElementDefinition_Blueprint : public URebelSpatialElementDefinition_Complex {
    GENERATED_BODY()
public:
    URebelSpatialElementDefinition_Blueprint();

};

