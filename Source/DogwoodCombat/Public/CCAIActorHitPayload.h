#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CCAIActorAttackPayload.h"
#include "CCAIActorHitPayload.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FCCAIActorHitPayload : public FCCAIActorAttackPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactPoint;
    
    FCCAIActorHitPayload();
};

