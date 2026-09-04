#pragma once
#include "CoreMinimal.h"
#include "GlossaryCharacteristic.generated.h"

USTRUCT(BlueprintType)
struct FGlossaryCharacteristic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    DOGWOODGLOSSARY_API FGlossaryCharacteristic();
};

