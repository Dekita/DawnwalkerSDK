#pragma once
#include "CoreMinimal.h"
#include "GlossaryEntry.h"
#include "GlossaryCategoryContainer.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FGlossaryCategoryContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlossaryEntry> Entries;
    
    FGlossaryCategoryContainer();
};

