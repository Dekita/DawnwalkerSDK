#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameTimeSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API UGameTimeSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameTimeSystemInterface();

};

