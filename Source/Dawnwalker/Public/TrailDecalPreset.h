#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TrailDecalSettings.h"
#include "TrailDecalPreset.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UTrailDecalPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrailDecalSettings> TrailDecals;
    
    UTrailDecalPreset();

};

