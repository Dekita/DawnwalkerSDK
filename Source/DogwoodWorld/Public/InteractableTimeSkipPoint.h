#pragma once
#include "CoreMinimal.h"
#include "TimeSkipPoint.h"
#include "InteractableTimeSkipPoint.generated.h"

class UInteractableComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AInteractableTimeSkipPoint : public ATimeSkipPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
public:
    AInteractableTimeSkipPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimeSkipEnabled() const;
    
};

