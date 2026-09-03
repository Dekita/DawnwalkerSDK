#pragma once
#include "CoreMinimal.h"
#include "EditorFramework/ThumbnailInfo.h"
#include "MetaHumanIdentityThumbnailInfo.generated.h"

UCLASS(Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentityThumbnailInfo : public UThumbnailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverridePromotedFrame;
    
    UMetaHumanIdentityThumbnailInfo();

};

