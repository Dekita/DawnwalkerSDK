#pragma once
#include "CoreMinimal.h"
#include "RebelAICooldown.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAICooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EndTime;
    
    FRebelAICooldown();
};

