#include "DawnwalkerAIEnvQueryTest_PawnsInAreaCheck.h"

UDawnwalkerAIEnvQueryTest_PawnsInAreaCheck::UDawnwalkerAIEnvQueryTest_PawnsInAreaCheck() {
    this->MinActors = 0.00f;
    this->MaxActors = 10.00f;
    this->TestType = ECountActorsTestType::NotFriendlyToPlayer;
    this->bCheckOnlyPawnsInCombat = true;
}


