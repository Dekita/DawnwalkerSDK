#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainMenuPlayerController.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API AMainMenuPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AMainMenuPlayerController(const FObjectInitializer& ObjectInitializer);

};

