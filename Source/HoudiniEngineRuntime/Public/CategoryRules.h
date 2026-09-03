#pragma once
#include "CoreMinimal.h"
#include "CategoryRules.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FCategoryRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Include;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Exclude;
    
    FCategoryRules();
};

