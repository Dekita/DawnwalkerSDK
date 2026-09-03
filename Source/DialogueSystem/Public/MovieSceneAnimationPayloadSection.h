#pragma once
#include "CoreMinimal.h"
#include "AnimationPayloadSectionData.h"
#include "MovieSceneCinematicIdleSection.h"
#include "MovieSceneAnimationPayloadSection.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneAnimationPayloadSection : public UMovieSceneCinematicIdleSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationPayloadSectionData AnimationPayloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimationPayloadDataTransferred;
    
public:
    UMovieSceneAnimationPayloadSection();

};

