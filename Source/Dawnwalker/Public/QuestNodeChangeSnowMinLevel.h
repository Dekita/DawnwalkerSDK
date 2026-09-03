#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeChangeSnowMinLevel.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeChangeSnowMinLevel : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowMinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Source;
    
public:
    UQuestNodeChangeSnowMinLevel();

};

