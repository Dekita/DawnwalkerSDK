#pragma once
#include "CoreMinimal.h"
#include "TimerConditionStartupTaskBase.h"
#include "LoadLevelStartupTask.generated.h"

class UWorldPartitionStreamingSourceComponent;

UCLASS(Blueprintable, EditInlineNew)
class DIALOGUESYSTEM_API ULoadLevelStartupTask : public UTimerConditionStartupTaskBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionStreamingSourceComponent*> StreamingSourceComponents;
    
public:
    ULoadLevelStartupTask();

};

