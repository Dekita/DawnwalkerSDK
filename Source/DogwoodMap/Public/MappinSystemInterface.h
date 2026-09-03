#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MappinSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODMAP_API UMappinSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMappinSystemInterface();

};

