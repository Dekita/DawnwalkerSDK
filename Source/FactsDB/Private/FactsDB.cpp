#include "FactsDB.h"

UFactsDB::UFactsDB() {
}

void UFactsDB::RemoveFactObserver(const FGameplayTag& FactName, const FFactObserverDelegate& Delegate) {
}

void UFactsDB::RemoveFact(const FGameplayTag FactName) {
}

void UFactsDB::RemoveAllFactObservers(const FGameplayTag& FactName) {
}

void UFactsDB::FactSetInt(const FGameplayTag FactName, int32 Value) {
}

int32 UFactsDB::FactGetInt(const FGameplayTag FactName) const {
    return 0;
}

bool UFactsDB::FactDoesExist(const FGameplayTag FactName) {
    return false;
}

void UFactsDB::Empty() {
}

void UFactsDB::ClearAllFacts() {
}

void UFactsDB::AddToFactInt(const FGameplayTag FactName, int32 Modifier) {
}

void UFactsDB::AddFactObserver(const FGameplayTag& FactName, const FFactObserverDelegate& Delegate) {
}


