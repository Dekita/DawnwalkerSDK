#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RebelNavigationDebugBoxEntry.generated.h"

USTRUCT(BlueprintType)
struct FRebelNavigationDebugBoxEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    REBELNAVIGATION_API FRebelNavigationDebugBoxEntry();
};

