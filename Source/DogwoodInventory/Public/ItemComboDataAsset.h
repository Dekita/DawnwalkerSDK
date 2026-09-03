#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemComboAttack.h"
#include "ItemComboDataAsset.generated.h"

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemComboDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemComboAttack ComboAttack;
    
    UItemComboDataAsset();

};

