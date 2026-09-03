#pragma once
#include "CoreMinimal.h"
#include "QuestSketchOptions.generated.h"

USTRUCT(BlueprintType)
struct QUEST_API FQuestSketchOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPausable;
    
    FQuestSketchOptions();
};

