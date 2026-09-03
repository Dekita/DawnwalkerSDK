#pragma once
#include "CoreMinimal.h"
#include "QuestTickSystemInterface.h"
#include "QuestTickSystemImpl.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestTickSystemImpl : public UQuestTickSystemInterface {
    GENERATED_BODY()
public:
    UQuestTickSystemImpl();

};

