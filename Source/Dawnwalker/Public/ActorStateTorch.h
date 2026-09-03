#pragma once
#include "CoreMinimal.h"
#include "PawnState.h"
#include "ActorStateTorch.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UActorStateTorch : public UPawnState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyAtNight;
    
    UActorStateTorch();

};

