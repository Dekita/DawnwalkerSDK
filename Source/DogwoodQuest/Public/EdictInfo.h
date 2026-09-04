#pragma once
#include "CoreMinimal.h"
#include "EdictEffect.h"
#include "EdictFact.h"
#include "EdictInfo.generated.h"

USTRUCT(BlueprintType)
struct FEdictInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EdictName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EdictDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEdictEffect> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEdictFact> EdictFacts;
    
    DOGWOODQUEST_API FEdictInfo();
};

