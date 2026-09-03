#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "BaseEvent.h"
#include "Event_MoveWithCallbackEnded.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UEvent_MoveWithCallbackEnded : public UBaseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPathFollowingResult::Type> MoveResult;
    
    UEvent_MoveWithCallbackEnded();

};

