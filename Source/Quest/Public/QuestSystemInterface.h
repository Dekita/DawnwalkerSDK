#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QuestSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UQuestSystemInterface();

};

