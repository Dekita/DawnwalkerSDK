#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "Templates/SubclassOf.h"
#include "RebelAIActionFragment_Ability.generated.h"

class URebelAIActionAbility;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Ability : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelAIActionAbility> AbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStandalone;
    
    FRebelAIActionFragment_Ability();
};

