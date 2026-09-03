#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PersistencySystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class PERSISTENCY_API UPersistencySystemInterface : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPersistencySystemInterface();

};

