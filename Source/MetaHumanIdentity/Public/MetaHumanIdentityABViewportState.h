#pragma once
#include "CoreMinimal.h"
#include "MetaHumanIdentityABViewportState.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANIDENTITY_API FMetaHumanIdentityABViewportState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowCurrentPose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowTemplateMesh: 1;
    
    FMetaHumanIdentityABViewportState();
};

