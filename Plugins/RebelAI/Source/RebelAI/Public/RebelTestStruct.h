#pragma once
#include "CoreMinimal.h"
#include "RebelTestStruct.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Param2;
    
    FRebelTestStruct();
};

