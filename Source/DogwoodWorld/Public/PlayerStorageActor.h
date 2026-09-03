#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerStorageActor.generated.h"

class UInteractableComponent;
class USceneComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API APlayerStorageActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    APlayerStorageActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetStorageInteractionPrompt();
    
};

