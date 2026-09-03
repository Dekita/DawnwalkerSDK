#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CCAIActorGuardChangedPayload.generated.h"

class UCombatComponentBase;
class URebelAIStub;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FCCAIActorGuardChangedPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponentBase* InstigatorCC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockDirections;
    
    FCCAIActorGuardChangedPayload();
};

