#pragma once
#include "CoreMinimal.h"
#include "BaseEvent.h"
#include "GameplayTagContainer.h"
#include "Event_NPCBehavior.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UEvent_NPCBehavior : public UBaseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UEvent_NPCBehavior();

};

