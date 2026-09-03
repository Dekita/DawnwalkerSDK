#pragma once
#include "CoreMinimal.h"
#include "SpreadSheetSet.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FSpreadSheetSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GoogleSpreadSheet;
    
    FSpreadSheetSet();
};

