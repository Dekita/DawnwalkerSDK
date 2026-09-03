#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "QuestStart.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API AQuestStart : public ATriggerMappinable {
    GENERATED_BODY()
public:
    AQuestStart(const FObjectInitializer& ObjectInitializer);

};

