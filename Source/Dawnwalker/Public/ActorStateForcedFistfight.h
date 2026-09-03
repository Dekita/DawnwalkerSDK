#pragma once
#include "CoreMinimal.h"
#include "PawnState.h"
#include "ActorStateForcedFistfight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UActorStateForcedFistfight : public UPawnState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UActorStateForcedFistfight();

};

