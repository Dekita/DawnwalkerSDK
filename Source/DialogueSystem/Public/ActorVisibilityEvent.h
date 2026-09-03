#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorVisibilityEvent.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FActorVisibilityEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibilityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFrameNumber FrameNumber;
    
    FActorVisibilityEvent();
};

