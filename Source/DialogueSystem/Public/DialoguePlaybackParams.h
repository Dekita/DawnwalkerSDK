#pragma once
#include "CoreMinimal.h"
#include "DialoguePlaybackParams.generated.h"

class UDialogueStartupTaskBase;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDialoguePlaybackParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogueStartupTaskBase*> StartupTasks;
    
    FDialoguePlaybackParams();
};

