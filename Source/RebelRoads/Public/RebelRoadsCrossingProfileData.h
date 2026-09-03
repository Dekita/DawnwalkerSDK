#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsCrossingType.h"
#include "RebelRoadsCrossingProfileData.generated.h"

USTRUCT(BlueprintType)
struct REBELROADS_API FRebelRoadsCrossingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsCrossingType CrossingType;
    
    FRebelRoadsCrossingProfileData();
};

