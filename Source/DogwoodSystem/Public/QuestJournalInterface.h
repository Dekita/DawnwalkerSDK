#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QuestJournalInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API UQuestJournalInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UQuestJournalInterface();

};

