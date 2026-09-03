#pragma once
#include "CoreMinimal.h"
#include "QuestTrigger.h"
#include "QuestTriggerSphere.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API AQuestTriggerSphere : public AQuestTrigger {
    GENERATED_BODY()
public:
    AQuestTriggerSphere(const FObjectInitializer& ObjectInitializer);

};

