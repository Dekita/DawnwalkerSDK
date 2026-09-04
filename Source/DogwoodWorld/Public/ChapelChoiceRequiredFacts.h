#pragma once
#include "CoreMinimal.h"
#include "FactTemplate.h"
#include "ChapelChoiceRequiredFacts.generated.h"

USTRUCT(BlueprintType)
struct FChapelChoiceRequiredFacts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactTemplate> Facts;
    
    DOGWOODWORLD_API FChapelChoiceRequiredFacts();
};

