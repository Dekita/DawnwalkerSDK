#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EQuestCurrencyTransactionType.h"
#include "QuestCurrencyTransactionRow.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FQuestCurrencyTransactionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestCurrencyTransactionType CurrencyTransaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FQuestCurrencyTransactionRow();
};

