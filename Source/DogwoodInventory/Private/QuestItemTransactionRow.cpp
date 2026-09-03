#include "QuestItemTransactionRow.h"

FQuestItemTransactionRow::FQuestItemTransactionRow() {
    this->bForceItemLevels = false;
    this->ForcedLevelBase = 0;
    this->MinItemLevel = 0;
    this->bRemoveItemsFromInventory = false;
    this->CurrencyTransaction = EQuestCurrencyTransactionType::None;
    this->bRemoveCurrencyFromInventory = false;
    this->CustomCurrencyAmount = 0;
    this->XPRewardAmount = EQuestExperienceRewardAmount::None;
    this->TraitPointsRewardAmount = 0;
    this->VampireMutationRewardAmount = 0;
    this->bChangeAlertLevel = false;
    this->AlertChange = EAlertChange::ToMinimum;
}

