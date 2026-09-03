#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAI_Include_OverrideData.h"
#include "RebelAI_Include_Override.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_Include_Override {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> IncludesPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FRebelAI_Include_OverrideData> MapToOverrides;
    
    FRebelAI_Include_Override();
};

