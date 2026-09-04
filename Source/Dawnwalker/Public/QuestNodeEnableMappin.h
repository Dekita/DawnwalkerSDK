#pragma once
#include "CoreMinimal.h"
#include "QuestNodeMappinBase.h"
#include "QuestNodeEnableMappin.generated.h"

UCLASS(Blueprintable)
class UQuestNodeEnableMappin : public UQuestNodeMappinBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOtherMappinsFromObjective;
    
public:
    UQuestNodeEnableMappin();

};

