#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EdictFact.generated.h"

USTRUCT(BlueprintType)
struct FEdictFact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    DOGWOODQUEST_API FEdictFact();
};

