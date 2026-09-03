#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "QuestConditionWardDispelledType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODWORLD_API UQuestConditionWardDispelledType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
public:
    UQuestConditionWardDispelledType();

};

