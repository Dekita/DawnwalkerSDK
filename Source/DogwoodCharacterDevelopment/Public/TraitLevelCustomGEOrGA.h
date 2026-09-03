#pragma once
#include "CoreMinimal.h"
#include "TraitLevelCustomGEOrGA.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FTraitLevelCustomGEOrGA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GEOrGA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Parameters;
    
    FTraitLevelCustomGEOrGA();
};

