#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DISTriggerInteractionDelegate.h"
#include "InteractionSubsystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UInteractionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDISTriggerInteraction OnDISInteractionTriggered;
    
    UInteractionSubsystem();

};

