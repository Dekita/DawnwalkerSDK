#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_Niagara.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Niagara : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToAttackerWeapon;
    
    FRebelAIActionFragment_Niagara();
};

