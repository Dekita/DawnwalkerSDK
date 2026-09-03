#pragma once
#include "CoreMinimal.h"
#include "SpecialDialogueChoice.h"
#include "NecrospeakCatalystSpecialDialogueChoice.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UNecrospeakCatalystSpecialDialogueChoice : public USpecialDialogueChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* Item;
    
    UNecrospeakCatalystSpecialDialogueChoice();

};

