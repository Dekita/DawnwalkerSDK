#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Bindings/MovieSceneCustomBinding.h"
#include "MovieSceneCinematicBinding.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DIALOGUESYSTEM_API UMovieSceneCinematicBinding : public UMovieSceneCustomBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerTag;
    
    UMovieSceneCinematicBinding();

};

