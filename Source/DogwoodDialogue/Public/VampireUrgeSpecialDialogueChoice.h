#pragma once
#include "CoreMinimal.h"
#include "SpecialDialogueChoice.h"
#include "EVampireHunger.h"
#include "EReplacementMode.h"
#include "EVampireUrgeDisplayMode.h"
#include "VampireUrgeSpecialDialogueChoice.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UVampireUrgeSpecialDialogueChoice : public USpecialDialogueChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplacementMode ReplacementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireUrgeDisplayMode DisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowWhenInHumanForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHungerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireHunger ForcedHungerLevel;
    
    UVampireUrgeSpecialDialogueChoice();

};

