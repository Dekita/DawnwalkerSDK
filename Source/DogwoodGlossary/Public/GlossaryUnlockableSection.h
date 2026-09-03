#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "GameplayTagContainer.h"
#include "GlossaryUnlockableSection.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FGlossaryUnlockableSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresUnlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType RequiredInputType;
    
    FGlossaryUnlockableSection();
};

