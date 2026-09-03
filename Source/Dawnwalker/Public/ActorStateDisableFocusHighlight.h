#pragma once
#include "CoreMinimal.h"
#include "PawnState.h"
#include "ActorStateDisableFocusHighlight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UActorStateDisableFocusHighlight : public UPawnState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
public:
    UActorStateDisableFocusHighlight();

};

