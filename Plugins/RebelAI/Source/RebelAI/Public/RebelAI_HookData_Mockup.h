#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAI_HookData_Mockup.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_HookData_Mockup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    FRebelAI_HookData_Mockup();
};

