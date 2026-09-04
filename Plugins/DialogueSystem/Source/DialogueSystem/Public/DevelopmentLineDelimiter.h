#pragma once
#include "CoreMinimal.h"
#include "DevelopmentLineDelimiter.generated.h"

USTRUCT(BlueprintType)
struct FDevelopmentLineDelimiter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Close;
    
    DIALOGUESYSTEM_API FDevelopmentLineDelimiter();
};

