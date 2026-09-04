#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "InputSwitchSubsystem.generated.h"

UCLASS(Blueprintable)
class REBELINPUT_API UInputSwitchSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UInputSwitchSubsystem();

};

