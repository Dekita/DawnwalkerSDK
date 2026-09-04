#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSetCharacterPosition.h"
#include "MovieSetCharacterPositionsForCameraPosition.h"
#include "MovieSetPositioningData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FMovieSetPositioningData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CameraPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSetCharacterPosition> CharacterPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSetCharacterPositionsForCameraPosition> CharacterPositionsByCameraPosition;
    
    FMovieSetPositioningData();
};

