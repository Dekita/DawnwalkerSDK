#pragma once
#include "CoreMinimal.h"
#include "RebelAI_Payload.h"
#include "RebelAI_Name_Array_Payload.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_Name_Array_Payload : public FRebelAI_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Value;
    
    FRebelAI_Name_Array_Payload();
};

