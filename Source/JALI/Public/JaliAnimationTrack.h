#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "JaliAnimationTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class JALI_API UJaliAnimationTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UJaliAnimationTrack();

};

