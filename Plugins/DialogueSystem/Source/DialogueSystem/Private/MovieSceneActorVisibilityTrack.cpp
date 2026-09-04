#include "MovieSceneActorVisibilityTrack.h"

UMovieSceneActorVisibilityTrack::UMovieSceneActorVisibilityTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AfterSpawn;
}


