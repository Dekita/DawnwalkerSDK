#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RebelBypassingDuringPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct REBELBYPASSING_API FRebelBypassingDuringPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FRebelBypassingDuringPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRebelBypassingDuringPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FRebelBypassingDuringPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

