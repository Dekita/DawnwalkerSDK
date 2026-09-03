#pragma once
#include "CoreMinimal.h"
#include "MetaHumanIdentityPromotedFrame.h"
#include "MetaHumanIdentityFootageFrame.generated.h"

UCLASS(Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentityFootageFrame : public UMetaHumanIdentityPromotedFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameNumber;
    
    UMetaHumanIdentityFootageFrame();

};

