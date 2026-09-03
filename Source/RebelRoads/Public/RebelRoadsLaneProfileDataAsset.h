#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelRoadsLaneProfile.h"
#include "RebelRoadsLaneProfileDataAsset.generated.h"

UCLASS(Blueprintable)
class REBELROADS_API URebelRoadsLaneProfileDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsLaneProfile> Lanes;
    
    URebelRoadsLaneProfileDataAsset();

};

