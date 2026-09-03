#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MetaHumanIdentityPoseState.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANIDENTITY_API FMetaHumanIdentityPoseState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime CurrentFrameTime;
    
    FMetaHumanIdentityPoseState();
};

