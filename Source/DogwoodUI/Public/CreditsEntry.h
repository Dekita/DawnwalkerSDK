#pragma once
#include "CoreMinimal.h"
#include "ECreditsEntryType.h"
#include "CreditsEntry.generated.h"

USTRUCT(BlueprintType)
struct FCreditsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditsEntryType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> Content;
    
    DOGWOODUI_API FCreditsEntry();
};

