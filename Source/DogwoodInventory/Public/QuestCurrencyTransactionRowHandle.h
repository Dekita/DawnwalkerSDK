#pragma once
#include "CoreMinimal.h"
#include "RebelTableRowHandle.h"
#include "QuestCurrencyTransactionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FQuestCurrencyTransactionRowHandle : public FRebelTableRowHandle {
    GENERATED_BODY()
public:
    FQuestCurrencyTransactionRowHandle();
};

