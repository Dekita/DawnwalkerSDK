#pragma once
#include "CoreMinimal.h"
#include "WalkOutAnimationName.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FWalkOutAnimationName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WalkAnimation;
    
    FWalkOutAnimationName();
};

