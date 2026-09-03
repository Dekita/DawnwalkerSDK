#include "QuestConditionNPCSensedType.h"

UQuestConditionNPCSensedType::UQuestConditionNPCSensedType() {
    this->SenseCondition = ESenseConditionType::Heard;
}

void UQuestConditionNPCSensedType::OnNPCSensedHandler(APawn* Pawn) {
}

void UQuestConditionNPCSensedType::OnNPCHeardHandler(APawn* Instigator, const FVector& Location, float Volume) {
}


