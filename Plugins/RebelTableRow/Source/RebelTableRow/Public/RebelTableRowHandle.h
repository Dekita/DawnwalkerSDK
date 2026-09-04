#pragma once
#include "CoreMinimal.h"
#include "RebelTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct REBELTABLEROW_API FRebelTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FRebelTableRowHandle();
};

