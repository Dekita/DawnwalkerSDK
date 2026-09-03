#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeDisplayHUDSubtitle.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeDisplayHUDSubtitle : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToFade;
    
    UQuestNodeDisplayHUDSubtitle();

};

