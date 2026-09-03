#pragma once
#include "CoreMinimal.h"
#include "TraitUnblockVideos.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FTraitUnblockVideos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMediaSource*> Videos;
    
    FTraitUnblockVideos();
};

