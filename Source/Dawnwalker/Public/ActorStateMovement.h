#pragma once
#include "CoreMinimal.h"
#include "PawnState.h"
#include "ActorStateMovement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UActorStateMovement : public UPawnState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideInputSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideInputSizeValue;
    
    UActorStateMovement();

};

