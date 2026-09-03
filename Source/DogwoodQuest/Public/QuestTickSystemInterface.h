#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QuestTickSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODQUEST_API UQuestTickSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UQuestTickSystemInterface();

};

