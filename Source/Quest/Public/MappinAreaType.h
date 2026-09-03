#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MappinAreaType.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class QUEST_API UMappinAreaType : public UObject {
    GENERATED_BODY()
public:
    UMappinAreaType();

};

