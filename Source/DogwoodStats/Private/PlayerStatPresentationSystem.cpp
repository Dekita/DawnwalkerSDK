#include "PlayerStatPresentationSystem.h"

UPlayerStatPresentationSystem::UPlayerStatPresentationSystem() {
    this->PresentedStatTable = NULL;
    this->StatFormatTable = NULL;
}

TArray<FGameplayTag> UPlayerStatPresentationSystem::GetTopLevelStats() const {
    return TArray<FGameplayTag>();
}

FText UPlayerStatPresentationSystem::GetStatName(const FGameplayTag& StatTag) {
    return FText::GetEmpty();
}

FText UPlayerStatPresentationSystem::GetStatAsLocalizedText(const FGameplayTag& StatTag, const UObject* InWorldContext) {
    return FText::GetEmpty();
}

FPresentedStat UPlayerStatPresentationSystem::GetStat(const FGameplayTag& StatTag, bool& bFound) {
    return FPresentedStat{};
}


