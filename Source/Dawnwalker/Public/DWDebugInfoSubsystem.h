#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DWDebugInfoSubsystem.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDWDebugInfoSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UDWDebugInfoSubsystem();

};

