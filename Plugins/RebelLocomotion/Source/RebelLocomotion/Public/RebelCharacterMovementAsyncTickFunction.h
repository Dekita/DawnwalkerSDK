#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RebelCharacterMovementAsyncTickFunction.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelCharacterMovementAsyncTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FRebelCharacterMovementAsyncTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRebelCharacterMovementAsyncTickFunction> : public TStructOpsTypeTraitsBase2<FRebelCharacterMovementAsyncTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

