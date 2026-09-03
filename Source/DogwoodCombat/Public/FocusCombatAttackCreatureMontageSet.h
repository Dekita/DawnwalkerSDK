#pragma once
#include "CoreMinimal.h"
#include "FocusCreatureMontageSet.h"
#include "CreatureTypeContainer.h"
#include "FocusCombatAttackCreatureMontageSet.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FFocusCombatAttackCreatureMontageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer Allowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusCreatureMontageSet Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusCreatureMontageSet Miss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusCreatureMontageSet Death;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusCreatureMontageSet InstaKillSpecial;
    
    FFocusCombatAttackCreatureMontageSet();
};

