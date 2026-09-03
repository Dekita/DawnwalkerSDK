#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogueNodePlayLevelSequence.h"
#include "DrinkBloodSequenceRowHandle.h"
#include "DialogueNodeDrinkBlood.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UDialogueNodeDrinkBlood : public UDialogueNodePlayLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrinkBloodSequenceRowHandle DrinkBloodSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetTag;
    
    UDialogueNodeDrinkBlood();

};

