#pragma once
#include "CoreMinimal.h"
#include "SpecialDialogueChoice.h"
#include "GameplayTagContainer.h"
#include "NPCInteractionSpecialChoice.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODDIALOGUE_API UNPCInteractionSpecialChoice : public USpecialDialogueChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCTag;
    
    UNPCInteractionSpecialChoice();

};

