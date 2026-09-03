#pragma once
#include "CoreMinimal.h"
#include "CinematicCameraActor.h"
#include "DialogueCameraInterface.h"
#include "DialogueCameraActor.generated.h"

class UDialogueCameraComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API ADialogueCameraActor : public ACinematicCameraActor, public IDialogueCameraInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogueCameraComponent* DialogueCameraComponent;
    
public:
    ADialogueCameraActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

