#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "NodeEventSectionBase.generated.h"

UCLASS(Blueprintable)
class NODERUNTIME_API UNodeEventSectionBase : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UNodeEventSectionBase();

};

