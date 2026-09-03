#include "CreditsSubsystem.h"

UCreditsSubsystem::UCreditsSubsystem() {
    this->ShowedCreditsData = NULL;
}

bool UCreditsSubsystem::ShowCustomCredits(const UCreditsData* CreditsData) {
    return false;
}

bool UCreditsSubsystem::ShowCredits() {
    return false;
}

void UCreditsSubsystem::NotifyCreditsStarted() {
}

void UCreditsSubsystem::NotifyCreditsEnded() {
}


