#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestMappinReference.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUEST_API UQuestMappinReference : public UObject {
    GENERATED_BODY()
public:
    UQuestMappinReference();

};

