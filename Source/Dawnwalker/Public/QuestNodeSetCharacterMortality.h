#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "EMortalitySetting.h"
#include "QuestNodeSetCharacterMortality.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetCharacterMortality : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Reference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMortalitySetting MortalitySetting;
    
public:
    UQuestNodeSetCharacterMortality();

};

