#include "MovieSceneFlowTrack.h"

UMovieSceneFlowTrack::UMovieSceneFlowTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AfterSpawn;
}


