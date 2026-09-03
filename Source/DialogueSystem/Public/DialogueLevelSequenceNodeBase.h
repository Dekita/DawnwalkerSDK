#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "DialogueLevelSequenceNodeBase.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UDialogueLevelSequenceNodeBase : public UDialogueNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstLevelSequenceNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLastLevelSequenceNode;
    
    UDialogueLevelSequenceNodeBase();

};

