#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "NecrospeakLootableQuestConditionType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODWORLD_API UNecrospeakLootableQuestConditionType : public UQuestConditionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorReference> CatalystReferences;
    
    UNecrospeakLootableQuestConditionType();

};

