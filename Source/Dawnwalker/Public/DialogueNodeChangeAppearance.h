#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "GameplayTagContainer.h"
#include "DialogueNodeChangeAppearance.generated.h"

class UActorStateAppearance;

UCLASS(Blueprintable)
class DAWNWALKER_API UDialogueNodeChangeAppearance : public UDialogueNodeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IdentityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorStateAppearance* AppearanceState;
    
public:
    UDialogueNodeChangeAppearance();

};

