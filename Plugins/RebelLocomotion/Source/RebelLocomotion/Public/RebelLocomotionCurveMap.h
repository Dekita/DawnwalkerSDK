#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelLocomotionCurveMap.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelLocomotionCurveMap : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> CurveMap;
    
    URebelLocomotionCurveMap();

};

