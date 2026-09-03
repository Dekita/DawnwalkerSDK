#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodeBlueprint_Controller.generated.h"

class UQuestBlueprintBase;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeBlueprint_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestBlueprintBase* Object;
    
public:
    UQuestNodeBlueprint_Controller();

};

