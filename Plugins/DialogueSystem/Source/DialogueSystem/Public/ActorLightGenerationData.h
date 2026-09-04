#pragma once
#include "CoreMinimal.h"
#include "ActorLightGenerationData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FActorLightGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectsLightSpawnable;
    
    FActorLightGenerationData();
};

