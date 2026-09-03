#pragma once
#include "CoreMinimal.h"
#include "FactTemplate.h"
#include "ChapelChoiceRequiredFacts.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODWORLD_API FChapelChoiceRequiredFacts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactTemplate> Facts;
    
    FChapelChoiceRequiredFacts();
};

