#pragma once
#include "CoreMinimal.h"
#include "NPCInteractionSpecialChoice.h"
#include "ShopSpecialChoice.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UShopSpecialChoice : public UNPCInteractionSpecialChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayOpenShop;
    
    UShopSpecialChoice();

};

