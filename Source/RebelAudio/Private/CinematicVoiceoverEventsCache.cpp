#include "CinematicVoiceoverEventsCache.h"

FCinematicVoiceoverEventsCache::FCinematicVoiceoverEventsCache() {
    this->MainCharacterCombatGameplayVo = NULL;
    this->MainCharacterCombatCinematicGameplayVo = NULL;
    this->MainCharacterInternalDialogueVo = NULL;
    this->CombatGameplayVo = NULL;
    this->CombatCinematicGameplayVo = NULL;
    this->PreviewVo = NULL;
    this->VoNarrationStart = NULL;
    this->VoNarrationEnd = NULL;
    this->OverheadSubtitlesAlwaysVisibleCustomVo = NULL;
}

