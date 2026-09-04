#pragma once
#include "CoreMinimal.h"
#include "WalkInAnimationName.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FWalkInAnimationName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WalkAnimation;
    
    FWalkInAnimationName();
};

