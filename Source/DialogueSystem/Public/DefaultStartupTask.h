#pragma once
#include "CoreMinimal.h"
#include "DefaultStartupTask.generated.h"

class UDialogueStartupTaskBase;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDefaultStartupTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueStartupTaskBase* Task;
    
    FDefaultStartupTask();
};

