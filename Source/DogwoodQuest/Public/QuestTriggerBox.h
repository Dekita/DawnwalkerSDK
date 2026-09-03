#pragma once
#include "CoreMinimal.h"
#include "QuestTrigger.h"
#include "QuestTriggerBox.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API AQuestTriggerBox : public AQuestTrigger {
    GENERATED_BODY()
public:
    AQuestTriggerBox(const FObjectInitializer& ObjectInitializer);

};

