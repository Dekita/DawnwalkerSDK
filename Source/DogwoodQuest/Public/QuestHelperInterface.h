#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QuestHelperInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODQUEST_API UQuestHelperInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UQuestHelperInterface();

};

