#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeShowTutorial.generated.h"

class UTutorialSchema;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeShowTutorial : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTutorialSchema* TutorialSchema;
    
public:
    UQuestNodeShowTutorial();

};

