#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsCrossingType.h"
#include "RebelRoadsCrossingProfileData.generated.h"

USTRUCT(BlueprintType)
struct FRebelRoadsCrossingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsCrossingType CrossingType;
    
    REBELROADS_API FRebelRoadsCrossingProfileData();
};

