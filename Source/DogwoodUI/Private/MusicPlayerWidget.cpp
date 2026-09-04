#include "MusicPlayerWidget.h"

UMusicPlayerWidget::UMusicPlayerWidget() {
    this->PlayerEntriesDataTable = NULL;
    this->FadeDuration = 0.50f;
    this->PlayedEntry = -1;
    this->IsPaused = false;
}

void UMusicPlayerWidget::OnEntryClicked(int32 EntryIndex) {
}


float UMusicPlayerWidget::GetCurrentPlayPosition() {
    return 0.0f;
}

float UMusicPlayerWidget::GetCurrentPlayDuration() {
    return 0.0f;
}


