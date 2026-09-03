#include "ActivatableVideoPlayer.h"
#include "EDWWidgetInputMode.h"

UActivatableVideoPlayer::UActivatableVideoPlayer() {
    this->InputConfig = EDWWidgetInputMode::Menu;
    this->MediaPlayer = NULL;
    this->BinkMediaPlayer = NULL;
    this->VideoLayer = NULL;
    this->ScaleBox = NULL;
}

void UActivatableVideoPlayer::HandleVideoPlaybackReachedEnd() {
}

void UActivatableVideoPlayer::HandleVideoPlaybackClosed() {
}

void UActivatableVideoPlayer::HandleMediaOpened(const FString& _) {
}

void UActivatableVideoPlayer::DeactivateWidgetIfVideoQueueEmpty() {
}

void UActivatableVideoPlayer::ClearQueueAndInvokeCallbacks() {
}




