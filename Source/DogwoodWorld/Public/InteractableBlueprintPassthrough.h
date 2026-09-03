#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInteractableState.h"
#include "EInteractionRiskType.h"
#include "InteractableBlueprintPassthrough.generated.h"

class UInteractableComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AInteractableBlueprintPassthrough : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* Interactable;
    
public:
    AInteractableBlueprintPassthrough(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractionRiskType GetRiskType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractableState GetInteractableState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractablePrompt();
    
};

