#pragma once
#include "CoreMinimal.h"
#include "OptionalDialogueStartupTaskBase.h"
#include "DisableDoorGameplayLogicStartupTask.generated.h"

class ADoor;

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UDisableDoorGameplayLogicStartupTask : public UOptionalDialogueStartupTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ADoor>> DoorsToDisable;
    
public:
    UDisableDoorGameplayLogicStartupTask();

};

