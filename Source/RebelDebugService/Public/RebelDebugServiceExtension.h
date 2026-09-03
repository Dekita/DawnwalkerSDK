#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelDebugServiceExtension.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELDEBUGSERVICE_API URebelDebugServiceExtension : public UObject {
    GENERATED_BODY()
public:
    URebelDebugServiceExtension();

};

