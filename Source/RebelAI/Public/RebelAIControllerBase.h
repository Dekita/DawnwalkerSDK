#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelAIControllerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELAI_API URebelAIControllerBase : public UObject {
    GENERATED_BODY()
public:
    URebelAIControllerBase();

};

