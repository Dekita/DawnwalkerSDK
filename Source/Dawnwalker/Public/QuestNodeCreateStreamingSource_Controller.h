#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestNodeController.h"
#include "QuestNodeCreateStreamingSource_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeCreateStreamingSource_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StreamingActorGuid;
    
public:
    UQuestNodeCreateStreamingSource_Controller();

};

