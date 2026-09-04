#pragma once
#include "CoreMinimal.h"
#include "StateTreeSchema.h"
#include "RebelAIStateTreeSchema.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAIStateTreeSchema : public UStateTreeSchema {
    GENERATED_BODY()
public:
    URebelAIStateTreeSchema();

};

