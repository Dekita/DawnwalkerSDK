#pragma once
#include "CoreMinimal.h"
#include "ENodeEventSectionPlaybackType.h"
#include "NodeEventSectionBase.h"
#include "NodeEventRepeaterSection.generated.h"

UCLASS(Blueprintable)
class NODERUNTIME_API UNodeEventRepeaterSection : public UNodeEventSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENodeEventSectionPlaybackType PlaybackType;
    
    UNodeEventRepeaterSection();

};

