#pragma once
#include "CoreMinimal.h"
#include "MovieSetCharacterPositionsForCameraPosition.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FMovieSetCharacterPositionsForCameraPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraPositionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CharacterPositionIndices;
    
    FMovieSetCharacterPositionsForCameraPosition();
};

