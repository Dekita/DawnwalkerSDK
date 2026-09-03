#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragmentInstanceData.h"
#include "RebelAIActionFragmentInstanceData_Montage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragmentInstanceData_Montage : public FRebelAIActionFragmentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    FRebelAIActionFragmentInstanceData_Montage();
};

