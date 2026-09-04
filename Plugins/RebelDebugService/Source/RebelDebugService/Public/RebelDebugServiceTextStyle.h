#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERebelHorizontalTextAlign.h"
#include "ERebelVerticalTextAlign.h"
#include "RebelDebugServiceTextStyle.generated.h"

class UFont;

USTRUCT(BlueprintType)
struct REBELDEBUGSERVICE_API FRebelDebugServiceTextStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<UFont*> Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<float> FontHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FColor> Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<float> Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FVector2D> Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<ERebelHorizontalTextAlign> HorizontalTextAlign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<ERebelVerticalTextAlign> VerticalTextAlign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<bool> EnableShadow;
    
    FRebelDebugServiceTextStyle();
};

