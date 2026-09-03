#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelGenericTreeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=RebelGenericTree)
class REBELGENERICTREEMODULE_API URebelGenericTreeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    URebelGenericTreeSettings();

};

