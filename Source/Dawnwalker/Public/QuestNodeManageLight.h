#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeManageLight.generated.h"

class ALight;

UCLASS(Blueprintable)
class UQuestNodeManageLight : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ALight>> Lights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
public:
    UQuestNodeManageLight();

};

