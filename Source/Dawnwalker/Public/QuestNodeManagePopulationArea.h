#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeManagePopulationArea.generated.h"

class AActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeManagePopulationArea : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> PopulationAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
public:
    UQuestNodeManagePopulationArea();

};

