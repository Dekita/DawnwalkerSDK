#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERebelRoadsCrossingType.h"
#include "RebelRoadsCrossingProfileDataAsset.generated.h"

UCLASS(Blueprintable)
class REBELROADS_API URebelRoadsCrossingProfileDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsCrossingType CrossingType;
    
    URebelRoadsCrossingProfileDataAsset();

};

