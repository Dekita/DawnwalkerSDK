#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerLookAtTarget.h"
#include "DawnwalkerActorLookAtTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerActorLookAtTarget : public FDawnwalkerLookAtTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    FDawnwalkerActorLookAtTarget();
};

