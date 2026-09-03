#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "QuestBlockSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODQUEST_API UQuestBlockSystemInterface : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UQuestBlockSystemInterface();

};

