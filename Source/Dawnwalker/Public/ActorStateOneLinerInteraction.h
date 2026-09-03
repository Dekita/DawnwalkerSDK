#pragma once
#include "CoreMinimal.h"
#include "PawnState.h"
#include "ActorStateOneLinerInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UActorStateOneLinerInteraction : public UPawnState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
public:
    UActorStateOneLinerInteraction();

};

