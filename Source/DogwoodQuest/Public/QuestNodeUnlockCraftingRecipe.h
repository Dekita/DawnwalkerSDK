#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeUnlockCraftingRecipe.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeUnlockCraftingRecipe : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* ForItem;
    
public:
    UQuestNodeUnlockCraftingRecipe();

};

