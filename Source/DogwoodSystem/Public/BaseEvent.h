#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseEvent.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API UBaseEvent : public UObject {
    GENERATED_BODY()
public:
    UBaseEvent();

};

