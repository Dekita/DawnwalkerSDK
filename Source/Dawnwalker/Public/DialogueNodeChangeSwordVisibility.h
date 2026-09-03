#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "GameplayTagContainer.h"
#include "DialogueNodeChangeSwordVisibility.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDialogueNodeChangeSwordVisibility : public UDialogueNodeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
public:
    UDialogueNodeChangeSwordVisibility();

};

