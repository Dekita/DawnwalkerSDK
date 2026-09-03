#pragma once
#include "CoreMinimal.h"
#include "JaliEmotionSection.h"
#include "JaliMaskTrackSection.generated.h"

UCLASS(Blueprintable)
class JALI_API UJaliMaskTrackSection : public UJaliEmotionSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaskName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaskValue;
    
    UJaliMaskTrackSection();

};

