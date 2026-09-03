#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "NecrospeakQuestConditionType.generated.h"

class UNecrospeakConfig;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODWORLD_API UNecrospeakQuestConditionType : public UQuestConditionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference NecrospeakBodyReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNecrospeakConfig* NecrospeakConfig;
    
    UNecrospeakQuestConditionType();

};

