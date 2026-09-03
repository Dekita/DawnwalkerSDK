#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "DialogueNodeAudioSetAkStates.generated.h"

class UAkStateValue;

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UDialogueNodeAudioSetAkStates : public UDialogueNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAkStateValue>> States;
    
    UDialogueNodeAudioSetAkStates();

};

