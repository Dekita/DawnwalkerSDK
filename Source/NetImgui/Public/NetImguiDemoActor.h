#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NetImguiDemoActor.generated.h"

UCLASS(Blueprintable)
class NETIMGUI_API ANetImguiDemoActor : public AActor {
    GENERATED_BODY()
public:
    ANetImguiDemoActor(const FObjectInitializer& ObjectInitializer);

};

