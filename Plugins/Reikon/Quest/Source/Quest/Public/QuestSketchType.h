#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestSketchType.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class QUEST_API UQuestSketchType : public UObject {
    GENERATED_BODY()
public:
    UQuestSketchType();

};

