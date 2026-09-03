#pragma once
#include "CoreMinimal.h"
#include "JaliEmotionSection.h"
#include "JaliHeartTrackSection.generated.h"

UCLASS(Blueprintable)
class JALI_API UJaliHeartTrackSection : public UJaliEmotionSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HeartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeartValue;
    
    UJaliHeartTrackSection();

};

