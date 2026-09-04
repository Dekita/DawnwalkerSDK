#pragma once
#include "CoreMinimal.h"
#include "NPCPaymentSpecialChoice.h"
#include "QuestCurrencyTransactionRowHandle.h"
#include "CurrencyPaymentSpecialChoice.generated.h"

UCLASS(Blueprintable)
class UCurrencyPaymentSpecialChoice : public UNPCPaymentSpecialChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestCurrencyTransactionRowHandle CurrencyTransaction;
    
public:
    UCurrencyPaymentSpecialChoice();

};

