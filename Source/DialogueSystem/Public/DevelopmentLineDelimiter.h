#pragma once
#include "CoreMinimal.h"
#include "DevelopmentLineDelimiter.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDevelopmentLineDelimiter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Close;
    
    FDevelopmentLineDelimiter();
};

