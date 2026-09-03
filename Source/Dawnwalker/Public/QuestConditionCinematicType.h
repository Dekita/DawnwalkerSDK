#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ECinematicConditionFilter.h"
#include "ECinematicConditionType.h"
#include "QuestConditionCinematicType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionCinematicType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECinematicConditionType PauseUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECinematicConditionFilter CinematicType;
    
public:
    UQuestConditionCinematicType();

};

