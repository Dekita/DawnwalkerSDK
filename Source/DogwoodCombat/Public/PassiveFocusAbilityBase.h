#pragma once
#include "CoreMinimal.h"
#include "EFocusAbilityType.h"
#include "FocusAbilityBase.h"
#include "PassiveFocusAbilityBase.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UPassiveFocusAbilityBase : public UFocusAbilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusAbilityType AbilityType;
    
    UPassiveFocusAbilityBase();

};

