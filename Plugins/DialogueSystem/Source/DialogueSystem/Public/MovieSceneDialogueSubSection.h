#pragma once
#include "CoreMinimal.h"
#include "Sections/MovieSceneSubSection.h"
#include "EDialogueSubSequenceLock.h"
#include "MovieSceneDialogueSubSection.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneDialogueSubSection : public UMovieSceneSubSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogueSubSequenceLock VoiceImportLock;
    
    UMovieSceneDialogueSubSection(const FObjectInitializer& ObjectInitializer);

};

