#pragma once
#include "CoreMinimal.h"
#include "LiveLinkControllerBase.h"
#include "LiveLinkMvnTransformController.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIVELINKMVNPLUGIN_API ULiveLinkMvnTransformController : public ULiveLinkControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SegmentIndex;
    
    ULiveLinkMvnTransformController();

};

