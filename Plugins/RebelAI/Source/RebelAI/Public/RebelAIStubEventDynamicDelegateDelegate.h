#pragma once
#include "CoreMinimal.h"
#include "RebelAIEvent.h"
#include "RebelAIStubEventDynamicDelegateDelegate.generated.h"

class URebelAIStub;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRebelAIStubEventDynamicDelegate, URebelAIStub*, AIStub, const FRebelAIEvent&, Event);

