#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "DWLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class DOGWOODSYSTEM_API UDWLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UDWLocalPlayer();

};

