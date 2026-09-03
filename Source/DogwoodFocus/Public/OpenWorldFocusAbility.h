#pragma once
#include "CoreMinimal.h"
#include "FocusAbilityBase.h"
#include "OpenWorldFocusAbility.generated.h"

UCLASS(Blueprintable)
class DOGWOODFOCUS_API UOpenWorldFocusAbility : public UFocusAbilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AbilityDescription;
    
    UOpenWorldFocusAbility();

};

