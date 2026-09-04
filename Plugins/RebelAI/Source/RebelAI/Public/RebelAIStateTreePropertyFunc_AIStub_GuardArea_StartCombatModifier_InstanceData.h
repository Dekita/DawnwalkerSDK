#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "StateTreePropertyRef.h"
#include "RebelAIStateTreePropertyFunc_AIStub_GuardArea_StartCombatModifier_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_AIStub_GuardArea_StartCombatModifier_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GuardAreaPositionModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GuardModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FRebelAIStateTreePropertyFunc_AIStub_GuardArea_StartCombatModifier_InstanceData();
};

