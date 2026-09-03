#pragma once
#include "CoreMinimal.h"
#include "NPCPaymentSpecialChoice.h"
#include "ItemPaymentSpecialChoice.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UItemPaymentSpecialChoice : public UNPCPaymentSpecialChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemBaseDataAsset*, int32> Items;
    
public:
    UItemPaymentSpecialChoice();

};

