#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SaveGameInterface.h"
#include "QuestSystem.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestSystem : public UGameInstanceSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UQuestSystem();


    // Fix for true pure virtual functions not being implemented
};

