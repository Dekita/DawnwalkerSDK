#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "LockWorldToRegionQuestNode.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API ULockWorldToRegionQuestNode : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Region;
    
public:
    ULockWorldToRegionQuestNode();

};

