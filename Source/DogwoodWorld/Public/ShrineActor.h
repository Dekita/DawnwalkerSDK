#pragma once
#include "CoreMinimal.h"
#include "FastTravelPoint.h"
#include "ShrineActor.generated.h"

class UInteractableComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AShrineActor : public AFastTravelPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* ShrineInteraction;
    
    AShrineActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnInteractionStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnChapelFadeOut();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShrineInteractionStarted();
    
};

