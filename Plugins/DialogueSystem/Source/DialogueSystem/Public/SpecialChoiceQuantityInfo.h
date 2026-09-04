#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpecialChoiceQuantityInfo.generated.h"

class UCommonTextStyle;

USTRUCT(BlueprintType)
struct FSpecialChoiceQuantityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FormatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> NonProgressingTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> ProgressingTextStyle;
    
    DIALOGUESYSTEM_API FSpecialChoiceQuantityInfo();
};

