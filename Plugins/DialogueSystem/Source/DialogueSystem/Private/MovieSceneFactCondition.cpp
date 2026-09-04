#include "MovieSceneFactCondition.h"

UMovieSceneFactCondition::UMovieSceneFactCondition() {
    this->ConditionType = EConditionCheckType::EVCT_Greater;
    this->Value = 0;
}


