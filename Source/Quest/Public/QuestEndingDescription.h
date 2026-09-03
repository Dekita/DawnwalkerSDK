#pragma once
#include "CoreMinimal.h"
#include "QuestEndingDescription.generated.h"

USTRUCT(BlueprintType)
struct QUEST_API FQuestEndingDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EndingID;
    
public:
    FQuestEndingDescription();
};

