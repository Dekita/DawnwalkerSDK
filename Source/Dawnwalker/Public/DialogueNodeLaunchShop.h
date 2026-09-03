#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "GameplayTagContainer.h"
#include "DialogueNodeLaunchShop.generated.h"

class ADawnwalkerHUDBase;
class UInventoryComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API UDialogueNodeLaunchShop : public UDialogueNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSavedChoiceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MerchantTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* BoundMerchantInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerHUDBase* BoundHUD;
    
public:
    UDialogueNodeLaunchShop();

};

