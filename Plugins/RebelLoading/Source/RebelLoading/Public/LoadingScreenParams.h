#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenParams.generated.h"

USTRUCT(BlueprintType)
struct FLoadingScreenParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VideoNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDecorations;
    
    REBELLOADING_API FLoadingScreenParams();
};

