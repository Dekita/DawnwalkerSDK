#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BindingTagPair.generated.h"

USTRUCT(BlueprintType)
struct FBindingTagPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IdentityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceTag;
    
    DOGWOODDIALOGUE_API FBindingTagPair();
};

